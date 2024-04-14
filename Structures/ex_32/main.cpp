#include <iostream>
#include <filesystem>
#include <cmath>
#include <fstream>

using namespace std::filesystem;
using namespace std;

class FileSystemManager
{
public:
	FileSystemManager(path& root) : root(root) {};

	double getSize()
	{
		double filesize = file_size(root);
		if (filesize != static_cast<double>(-1))
		{
			return convertBToMB(filesize);
		}
		cout << "ERROR" << endl;
		return static_cast<double>(-1);
	}

	double getSizeFolder()
	{
		double folderSize = 0.0;
		for (const auto& data : recursive_directory_iterator(root))
		{
			if (is_regular_file(data))
			{
				folderSize += file_size(data);
			}
		}
		return convertBToMB(folderSize);
	}

	void getDiskContent()
	{
		try
		{
			for (const auto& data : directory_iterator(root))
			{
				cout << " | " << data.path() << endl;
			}
		}
		catch (const filesystem_error& err)
		{
			cout << "Error: " << err.what() << ". Or check path" << endl;
		}
	}

	void getDiskSize()
	{
		space_info space_storage = space(root);
		cout << "Space capacity: " << space_storage.capacity / (1024 * 1024 * 1024) << " GB" << endl;
		cout << "Free space: " << space_storage.free / (1024 * 1024 * 1024) << " GB" << endl;
		cout << "Available space: " << space_storage.available / (1024 * 1024 * 1024) << " GB" << endl;
	}

	void createDirectory(const string& name)
	{
		create_directory(root / name);
	}

	void createFile(const string& name)
	{
		ofstream file(root / name);
		file.close();
	}

	void removeByPath(const path& p)
	{
		remove_all(root / p);
	}

	void renameByPath(const string& old_name, const string& new_name)
	{
		rename(root / old_name, root / new_name);
	}

	void copyFile(const string& source, const string& destination)
	{
		copy_file(root / source, root / destination);
	}

	void copyFolder(const string& source, const string& destination)
	{
		copy(root / source, root / destination, copy_options::recursive);
	}

	void searchByMask(const path& dir, const string& mask)
	{
		for (const auto& data : recursive_directory_iterator(dir))
		{
			if (is_regular_file(data) && data.path().extension() == mask)
			{
				cout << data.path() << endl;
			}
		}
	}

	double convertBToMB(double size)
	{
		return round(size / (1024 * 1024) * 10) / 100;
	}

	~FileSystemManager() { root.clear(); };

private:
	path& root;
};


int main()
{
	path path1 = "D:\\OBS";
	path path2 = "D:\\NFT\\ak47.jpg";
	path path3 = "C:\\";
	FileSystemManager manager1(path1);
	FileSystemManager manager2(path2);
	FileSystemManager manager3(path3);

	cout << "Folder size: " << manager1.getSizeFolder() << " MB" << endl << endl;
	cout << "File size: " << manager2.getSize() << " MB" << endl;
	manager2.getDiskSize();

	cout << endl;

	manager1.getDiskContent();
	manager1.createDirectory("test");
	manager1.createFile("test\\fff.psd");
	manager1.removeByPath("test");
	manager1.createDirectory("test");
	manager1.renameByPath("test", "test23");
	manager1.createFile("test23\\fff.psd");
	manager1.renameByPath("test23\\fff.psd", "test23\\256.psd");

	manager1.searchByMask("D:\\OBS\\test23", ".psd");
}
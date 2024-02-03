//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class FileActions
//{
//public:
//	FileActions(const string& name) : name(name) {};
//	virtual void show() const = 0;
//	virtual void remove(const string& name) = 0;
//	virtual void rename(const string& newName) = 0;
//	virtual int getSize() const = 0;
//	virtual ~FileActions() {};
//	string name;
//
//};
//
//class File : public FileActions
//{
//public:
//	File(const string& name, int size) : FileActions(name), size(size) {};
//
//	void show() const override
//	{
//		cout << "Files in folder" << ", size: " << size << endl;
//	}
//	void remove(const string& name) override
//	{
//		cout << "Removing: " << name << endl;
//	}
//	void rename(const string& newName) override
//	{
//		cout << "Renaming..." << endl;
//		this->name = newName;
//	}
//	int getSize() const override
//	{
//		cout << "Size is " << size << endl;
//		return 0;
//	}
//
//private:
//	int size;
//};
//
//class Folder : public FileActions
//{
//public:
//	Folder(const string& name) : FileActions(name) {};
//
//	void show() const override
//	{
//		cout << "All files in directory \"" << name << "\"" << endl;
//		for (const auto& item : items)
//		{
//			item->show();
//		}
//	}
//	void remove(const string& name) override
//	{
//		cout << "Removing..." << endl;
//	}
//	void rename(const string& newName) override
//	{
//		cout << "Renaming..." << endl;
//		this->name = newName;
//	}
//	int getSize() const override
//	{
//		int size = 0;
//		for (const auto& item : items)
//		{
//			size += item->getSize();
//		}
//		return size;
//	}
//	void addItem(FileActions* item)
//	{
//		items.push_back(item);
//	}
//	void removeItem(FileActions* item)
//	{
//		auto it = std::remove(items.begin(), items.end(), item);
//		items.erase(it, items.end());
//		delete item;
//	}
//
//private:
//	vector<FileActions*> items;
//};
//
//
//int main()
//{
//	Folder fold("D:");
//	Folder doc("Doc");
//	doc.addItem(new File("Newfile", 2000));
//	doc.addItem(new File("New2", 1000));
//	doc.addItem(new File("New3", 3000));
//
//	fold.addItem(&doc);
//	fold.show();
//}
#include <iostream>
#include <vector>
#include <algorithm>
#include <filesystem>

using namespace std;

class FileActions
{
public:
	FileActions(const string& name) : name(name) {};
	virtual void show() const = 0;
	virtual void remove(const string& name) = 0;
	virtual void rename(const string& newName) = 0;
	virtual int getSize() const = 0;
	virtual ~FileActions() {};
	string name;

};

class File : public FileActions
{
public:
	File(const string& name, int size) : FileActions(name), size(size) {};

	void show() const override
	{
		cout << "Files in folder" << ", size: " << size << endl;
	}
	void remove(const string& name) override
	{
		cout << "Removing: " << name << endl;
	}
	void rename(const string& newName) override
	{
		cout << "Renaming..." << endl;
		this->name = newName;
	}
	int getSize() const override
	{
		cout << "Size is " << size << endl;
		return 0;
	}

private:
	int size;
};

class Folder : public FileActions
{
public:
	Folder(const string& name) : FileActions(name) {};

	void show() const override
	{
		cout << "!!!All files in directory \"" << name << "\"" << endl;
		system("dir");
		for (const auto& item : )
		{
			cout << item;
		}
		/*for (const auto& item : items)
		{
			item->show();
		}*/
	}
	void remove(const string& name) override
	{
		cout << "Removing..." << endl;
	}
	void rename(const string& newName) override
	{
		cout << "Renaming..." << endl;
		this->name = newName;
	}
	int getSize() const override
	{
		int size = 0;
		for (const auto& item : items)
		{
			size += item->getSize();
		}
		return size;
	}
	void addItem(FileActions* item)
	{
		items.push_back(item);
	}
	void removeItem(FileActions* item)
	{
		auto it = std::remove(items.begin(), items.end(), item);
		items.erase(it, items.end());
		delete item;
	}

private:
	vector<FileActions*> items;
};


int main()
{
	Folder fold("D:");
	Folder doc("Doc");
	doc.addItem(new File("Newfile", 2000));
	doc.addItem(new File("New2", 1000));
	doc.addItem(new File("New3", 3000));

	fold.addItem(&doc);
	fold.show();
}
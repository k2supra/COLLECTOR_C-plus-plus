#include "file.h"

int main()
{
	cout << "Work with .txt [1]\n"
		    "Work with .bin [2]" << endl;
	int oper;
	cin >> oper;
	switch (oper)
	{
	case 1:
	{
		cout << "Enter size: ";
		int size;
		cin >> size;
		Application* app = new Application[size];
		for (int i = 0; i < size; i++)
		{
			app[i].Input();
		}
		system("cls");
		for (int i = 0; i < size; i++)
		{
			app[i].print();
		}

		File file;
		for (int i = 0; i < size; i++)
		{
			file.save_to_file_txt(app[i]);
		}
	}break;
	case 2:
	{
		cout << "Enter size: ";
		int size;
		cin >> size;
		Application* app = new Application[size];
		for (int i = 0; i < size; i++)
		{
			app[i].Input();
		}
		system("cls");

		File file("file.bin", true);
		file.save_to_file_binary(app, size);

		for (size_t i = 0; i < size; i++)
		{
			app[i].print();
		}
	}
	default:
		break;
	}
}
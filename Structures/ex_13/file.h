#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

#include "app.h"

using namespace std;

struct File
{
	fstream file;
	string path;
	bool isBinary;
	File() {
		this->path = "file.txt";
	}
	File(bool isBinary) {
		this->isBinary = isBinary;
		this->path = "file.dat";
	}
	File(string path, bool isBinary) {
		this->path = path;
		this->isBinary = isBinary;
	}

	void save_to_file_txt(Application app) {
		this->file.open(this->path, ios::out | ios::app);
		if (!this->file.is_open())
			cout << "File not open!" << endl;
		else
		{
			this->file << app.date << endl;
			this->file << app.text << endl;
		}
		this->file.close();
	}
	void read_from_file_txt(Application& app)
	{
		if (!this->file.is_open())
			cout << "File not open!" << endl;
		else
		{
			this->file.open(this->path, ios::in);
			this->file >> app.date;
			this->file >> app.text;
			this->file.close();
		}
	}
	void save_to_file_binary(Application app) {
		this->file.open(this->path, ios::out & ios::binary | ios::app & ios::binary);
		if (!this->file.is_open())
			cout << "File not open!" << endl;
		else
		{
			file.read((char*)&app, sizeof(Application));
			this->file.close();
		}
	}
	void save_to_file_binary(Application* app, int size) {
		this->file.open(this->path, ios::out | ios::binary);
		if (!this->file.is_open())
			cout << "File not open!" << endl;
		else
		{
			file.write((char*)&size, sizeof(int));
			for (size_t i = 0; i < size; i++)
			{
				file.write((char*)&app[i], sizeof(Application));
			}
			this->file.close();
		}
	}
	void read_from_file_binary(Application*& app, int& size)
	{
		this->file.open(this->path, ios::in | ios::binary);
		if (!this->file.is_open())
			cout << "File not open!" << endl;
		else
		{
			file.read((char*)&size, sizeof(int));
			app = new Application[size];
			for (size_t i = 0; i < size; i++)
			{
				file.read((char*)&app[i], sizeof(Application));
			}
			this->file.close();
		}

	}
};

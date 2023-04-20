#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <locale.h>



using namespace std;

struct Book
{
	string autor, name;
	int year;
	int number;
};

int main()
{

	setlocale(LC_ALL, "ukr");

	Book books[5];

	books[0] = { "����_ʳ����" , "���_����_³��._�����_1._������", 2023, 904};
	books[1] = { "�������_������" , "�_����,_���_��������_�����", 2020, 664};
	books[2] = { "����_�������" , "������_��������._��_����_������_������_������", 2019, 400};
	books[3] = { "�����m_���������" , "����_���_������", 1998, 700};
	books[4] = { "�����_�����������" , "��������_����", 1999, 500};

	ofstream write("books.txt");

	for (size_t i = 0; i < 5; i++)
	{
		write << books[i].autor << " " << books[i].name << " " << books[i].year << " " << books[i].number << endl;
	}

	write.close();

	ifstream read("books.txt");

	string line;

	while (getline(read, line))
	{
		istringstream ss(line);

		string autor, name;
		int year;
		int number;

		ss >> autor >> name >> year >> number;

		if (year < 2000)
		{
			cout << autor << " " << name << " " << year << " " << number << endl;
		}

	}

	read.close();
}
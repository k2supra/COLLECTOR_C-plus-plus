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

	books[0] = { "Макс_Кідрук" , "Нові_Темні_Віки._Книга_1._Колонія", 2023, 904};
	books[1] = { "Ілларіон_Павлюк" , "Я_бачу,_Вас_цікавить_пітьма", 2020, 664};
	books[2] = { "Боріс_Джонсон" , "Фактор_Черчилля._Як_одна_людина_змінила_історію", 2019, 400};
	books[3] = { "Василm_Герасим’юк" , "Осінні_пси_Карпат", 1998, 700};
	books[4] = { "Євген_Пашковський" , "Щоденний_жезл", 1999, 500};

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
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//class Book
//{
//public:
//	explicit Book(const string author, const string title, const string publisher, int year, int pages)
//		: author(author), title(title), publisher(publisher), year(year), pages(pages){}
//
//	string getAuthor() const
//	{
//		return author;
//	}
//	string getTitle() const
//	{
//		return title;
//	}
//	string getPublisher() const
//	{
//		return publisher;
//	}
//	int getYear() const
//	{
//		return year;
//	}
//	int getPages() const
//	{
//		return pages;
//	}
//
//private:
//	string author;
//	string title;
//	string publisher;
//	int year;
//	int pages;
//};
//
//int main()
//{
//	vector<Book> books =
//	{
//		Book("Author1", "Name1", "Publisher1", 2020, 145),
//		Book("Author2", "Name2", "Publisher2", 2022, 12),
//		Book("Author1", "Name3", "Publisher3", 2023, 132),
//		Book("Author4", "Name4", "Publisher4", 2024, 144),
//		Book("Author5", "Name5", "Publisher5", 2025, 15)
//	};
//
//	cout << "Enter author: ";
//	string au;
//	getline(cin, au);
//	for (const auto& book : books)
//	{
//		if (book.getAuthor() == au)
//		{
//			cout << "Title: " << book.getTitle() << ", Publisher: " << book.getPublisher() << ", Year: " << book.getYear() << endl;
//		}
//	}
//
//	cout << "Enter publisher: ";
//	string pb;
//	getline(cin, pb);
//	for (const auto& book : books)
//	{
//		if (book.getPublisher() == pb)
//		{
//			cout << "Author: " << book.getAuthor() << ", Title: " << book.getTitle() << ", Year: " << book.getYear() << endl;
//		}
//	}
//
//	cout << "Enter year: ";
//	int yr;
//	cin >> yr;
//	for (const auto& book : books)
//	{
//		if (book.getYear() == yr)
//		{
//			cout << "Author: " << book.getAuthor() << ", Title: " << book.getTitle() << endl;
//		}
//	}
//
//}

class Worker
{
public:
	explicit Worker(const string fullName, const string position, int year, int salary)
		: fullName(fullName), position(position), year(year), salary(salary) {};
	
	string getName() const
	{
		return fullName;
	}
	string getPosition() const
	{
		return position;
	}
	int getYear() const
	{
		return year;
	}
	int getSalary() const
	{
		return salary;
	}

private:
	string fullName;
	string position;
	int year;
	int salary;
};

int main()
{
	vector<Worker> workers =
	{
		Worker("Bob", "Boss", 2021, 14500),
		Worker("Alice", "Secretary", 2021, 10000),
		Worker("Sandy", "Electric", 2020, 8000),
		Worker("Bobby", "Secretary", 2022, 11500),
	};

	int today = 2023;

	cout << "Enter experience: ";
	int exp;
	cin >> exp;

	cout << "Workers with experience" << endl;
	for (const auto work : workers)
	{
		if (today - work.getYear() >= exp)
		{
			cout << "Name: " << work.getName() << ", Position: " << work.getPosition() << endl;
		}
	}	
	cout << "--------------------------------------" << endl;
	cout << "Enter salary: ";
	int slr;
	cin >> slr;
	cin.ignore();
	cout << "With more salary" << endl;
	for (const auto work : workers)
	{
		if (slr < work.getSalary())
		{
			cout << "Name: " << work.getName() << ", Position: " << work.getPosition() << endl;
		}
	}
	cout << "--------------------------------------" << endl;
	cout << "Enter position: ";
	string pos;
	getline(cin, pos);
	cout << "Position" << endl;
	for (const auto work : workers)
	{
		if (work.getPosition() == pos)
		{
			cout << "Name: " << work.getName() << ", Salary: " << work.getSalary() << endl;
		}
	}
	cout << "--------------------------------------" << endl;
}
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <io.h>
#include <stdio.h>
#include <fcntl.h>


using namespace std;

int main() {
	srand(time(NULL));
	cout << "Enter a number of operation(1-6): ";
	int operation;
	cin >> operation;
	switch (operation)
	{
	case 1: {
		cout << "Enter a number: ";
		uint16_t number;
		cin >> number;
		for (size_t i = 0; i < number + 1; i++)
		{
			cout << i << " ";
		}
	}break;
	case 2: {
		cout << "Enter a start number: ";
		uint16_t number_start;
		cin >> number_start;
		cout << "Enter a finish number: ";
		uint16_t number_finish;
		cin >> number_finish;
		cout << "Pair: ";
		if (number_start > number_finish)
		{
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 2 == 0)
				{
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << "Unpair: ";
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 2 != 0)
				{
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << "/7: ";
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 7 == 0)
				{
					cout << i << " ";
				}
			}break;
		}

		cout << "\n" << "Pair: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		cout << "Unpair: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		cout << "/7: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 7 == 0)
			{
				cout << i << " ";
			}
		}
	}break;
	case 3: {
		cout << "Enter a start number: ";
		uint16_t number_start;
		cin >> number_start;
		cout << "Enter a finish number: ";
		uint16_t number_finish;
		cin >> number_finish;
		int sum = 0;
		cout << "0";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			sum += i;
			cout << " + " << i;
		}
		cout << " = " << sum;
	}break;
	case 4: {
		uint16_t number;
		cin >> number;
		int sum = 0;
		do
		{
			cout << "Enter a number: ";
			cin >> number;

			sum += number;
		} while (number != 0);

		cout << " = " << sum;
	}break;
	case 5: {
		unsigned short rnum = rand() % 500;
		cout << "Enter a number: ";
		int mnum;
		cin >> mnum;
		int counter = 2;
		do
		{
			cout << "Enter a number: ";
			cin >> mnum;
			if (mnum < rnum)
			{
				cout << "\nYour number is less than random ";
				counter += 1;
			}
			else if (mnum > rnum)
			{
				cout << "\nYour number is more than random ";
				counter += 1;
			}

		} while (mnum != rnum);
		cout << counter << " tries.";
		cout << " You did it!" << " Random number is " << rnum;
	}break;
	case 6: {
		/*::_setmode(::_fileno(stdout), _O_U16TEXT);
		auto const & sz_message
		{
			L"███████████████████████████████████" L"\n"
			L"█     ██████   ██████ ████ █ ██ ███" L"\n"
			L"█  ███ ████ ███ █████  ███ █ █ ████" L"\n"
			L"█     ████ █████ ████ █ ██ █  █████" L"\n"
			L"█  ███ ██         ███ ██ █ █ █ ████" L"\n"
			L"█     ██ █████████ ██ ███  █ ██ ███" L"\n"
			L"███████████████████████████████████" L"\n"
		};*/
		cout << "\t\tBAN K";
		cout << "\nChoose the value what you want to change:";
		cout << "\n Grivn`a   -   1";
		cout << "\n Dollar    -   2";
		cout << "\n Rupee     -   3";
		cout << "\n Brawl gem -   4";
		cout << "\nNumber: ";
		int oper;
		cin >> oper;
		system("cls");
		cout << "\nChoose the value what you want to change:";
		cout << "\n Grivn`a   -   1";
		cout << "\n Dollar    -   2";
		cout << "\n Rupee     -   3";
		cout << "\n Brawl gem -   4";
		cout << "\nNumber: ";
		int oper2;
		cin >> oper2;
		double grn, dollar, rupee, brawl_gem;
		switch (oper)
		{
		case 1: {
			switch (oper2)
			{
			case 1: {
				cout << "Enter your money(grn): ";
				cin >> grn;
				cout << "You will get: " << grn << " grn.";
			}break;
			case 2: {
				cout << "Enter your money(grn): ";
				cin >> grn;
				cout << "You will get: " << grn / 40 << " $.";
			}break;
			case 3: {
				cout << "Enter your money(grn): ";
				cin >> grn;
				cout << "You will get: " << grn / 45 << " rupee.";
			}break;
			case 4: {
				cout << "Enter your money(grn): ";
				cin >> grn;
				cout << "You will get: " << grn / 1.67 << " gems in BRAWL STARS.";
			}break;

			default:
				break;
			}
		}break;
		case 2: {
			switch (oper2)
			{
			case 1: {
				cout << "Enter your money($): ";
				cin >> dollar;
				cout << "You will get: " << dollar * 40 << " grn.";
			}break;
			case 2: {
				cout << "Enter your money($): ";
				cin >> dollar;
				cout << "You will get: " << dollar << " $.";
			}break;
			case 3: {
				cout << "Enter your money($): ";
				cin >> dollar;
				cout << "You will get: " << dollar * 113 << " rupee.";
			}break;
			case 4: {
				cout << "Enter your money($): ";
				cin >> dollar;
				cout << "You will get: " << dollar * 0.066 << " gems in BRAWL STARS.";
			}break;
			}
		default:
			break;
		}break;
		case 3: {
			switch (oper2)
			{
			case 1: {
				cout << "Enter your money(rupee): ";
				cin >> rupee;
				cout << "You will get: " << rupee * 0.28 << " grn.";
			}break;
			case 2: {
				cout << "Enter your money(rupee): ";
				cin >> rupee;
				cout << "You will get: " << rupee / 131 << " $.";
			}break;
			case 3: {
				cout << "Enter your money(rupee): ";
				cin >> rupee;
				cout << "You will get: " << rupee << " rupee.";
			}break;
			case 4: {
				cout << "Enter your money(rupee): ";
				cin >> rupee;
				cout << "You will get: " << rupee * 0.023 << " gems in BRAWL STARS.";
			}break;
			}break;
		}
		case 4: {
			switch (oper2)
			{
			case 1: {
				cout << "Enter your money(gem): ";
				cin >> brawl_gem;
				cout << "You will get: " << brawl_gem * 1.67 << " grn.";
			}break;
			case 2: {
				cout << "Enter your money(gem): ";
				cin >> brawl_gem;
				cout << "You will get: " << brawl_gem / 0.66 << " $.";
			}break;
			case 3: {
				cout << "Enter your money(gem): ";
				cin >> brawl_gem;
				cout << "You will get: " << brawl_gem / 0.23 << " rupee.";
			}break;
			case 4: {
				cout << "Enter your money(gem): ";
				cin >> brawl_gem;
				cout << "You will get: " << brawl_gem << " gems in BRAWL STARS.";
			}break;
			}break;
		}
			  /*::std::wcout << sz_message << ::std::flush;*/
			  return(0);
		}
	default:
		break;
	}

	}
}
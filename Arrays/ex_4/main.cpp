#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <fstream>
#include <string>
#include <random>


using namespace std;

int main() {
	srand(time(0));
	string line;
	int sumen, sumen1, sumen2, sumpl, sumpl1, sumpl2, numen11, numen12, numen21, numen22, numen31, numen32, numpl11, numpl12, numpl21, numpl22, numpl31, numpl32;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "Hello ";
	this_thread::sleep_for(std::chrono::milliseconds(1500));
	cout << "and welcome to the Los Pollos Hermanos family. ";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "Ough shit, here we go again. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "Hello and welcome to this game. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "CUBES. ";
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "Here some rules: ";
	this_thread::sleep_for(std::chrono::milliseconds(1500));
	cout << "\n1. Do not cheat (Idk how to cheat here=)). ";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\n2. Do not close your console.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\n3. Wins a player who get more sum in 3 rounds.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\nThat`s all. I`ll hope you enjoy.";
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	cout << "\nTo unblock secret text press [s] \nor skip it and press other button ";
	char symbol;
	cin >> symbol;
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	if (symbol == 's')
	{
		cout << "\nHahaha, you realy thought that I will tell you a secret world? ";
		cout << "OK. Let`s move. Secret phrase isssssss....... ";
		cout << "I`hope you will lose)";
	}
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "\n!!!Let`s start!!!";
	system("cls");
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "\n\t\tROUND 1";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nEnemy is throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	
	numen11 = rand() % 6 + 1;
	numen12 = rand() % 6 + 1;

	if (numen11 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen11 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen12 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumen = numen11 + numen12;
	cout << "" << numen11 << " and " << numen12 << ". Sum = " << sumen << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\t\t\tYour turn";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nYou`r throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	numpl11 = rand() % 6 + 1;
	numpl12 = rand() % 6 + 1;

	if (numpl11 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl11 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl11 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl11 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl11 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl11 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl12 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumpl = numpl11 + numpl12;
	cout << "" << numpl11 << " and " << numpl12 << ". Sum = " << sumpl << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "\n\tEnemy: " << sumen << ". You: " << sumpl << ".";
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\n\t\tROUND 2";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nEnemy is throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	numen21 = rand() % 6 + 1;
	numen22 = rand() % 6 + 1;

	if (numen21 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen21 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen21 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen21 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen21 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen21 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen22 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumen1 = numen21 + numen22 + sumen;
	cout << "" << numen21 << " and " << numen22 << ". Sum = " << sumen1 << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\t\t\tYour turn";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nYou`r throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	numpl21 = rand() % 6 + 1;
	numpl22 = rand() % 6 + 1;

	if (numpl21 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl21 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl21 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl21 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl21 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl21 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl22 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumpl1 = numpl21 + numpl22 + sumpl;
	cout << "" << numpl21 << " and " << numpl22 << ". Sum = " << sumpl1 << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "\n\tEnemy: " << sumen1 << ". You: " << sumpl1 << ".";
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\n\t\tROUND 3";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nEnemy is throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	numen31 = rand() % 6 + 1;
	numen32 = rand() % 6 + 1;

	if (numen31 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen31 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen31 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen31 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen31 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen31 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numen32 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumen2 = numen31 + numen32 + sumen1;
	cout << "" << numen31 << " and " << numen32 << ". Sum = " << sumen2 << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\t\t\tYour turn";
	this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "\nYou`r throwing";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".";
	this_thread::sleep_for(std::chrono::milliseconds(750));
	cout << ".\n";
	numpl31 = rand() % 6 + 1;
	numpl32 = rand() % 6 + 1;

	if (numpl31 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl31 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl31 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl31 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl31 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl31 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 1)
	{
		ifstream in("cubes\\1.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 2)
	{
		ifstream in("cubes\\2.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 3)
	{
		ifstream in("cubes\\3.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 4)
	{
		ifstream in("cubes\\4.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 5)
	{
		ifstream in("cubes\\5.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	if (numpl32 == 6)
	{
		ifstream in("cubes\\6.txt");
		if (in.is_open())
		{
			while (getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	sumpl2 = numpl31 + numpl32 + sumpl1;
	cout << "" << numpl31 << " and " << numpl32 << ". Sum = " << sumpl2 << endl;
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	cout << "\n\tEnemy: " << sumen2 << ". You: " << sumpl2 << ".";
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	cout << "\n\t\t\tRESULTS";
	cout << "\nYour count = " << sumpl2 << ". Bot`s count = " << sumen2 << ".";
	this_thread::sleep_for(std::chrono::milliseconds(5000));
	if (sumpl2 > sumen2)
	{
		cout << "\n You won, you are not noob. Maybe....";
	}
	else if (sumpl2 < sumen2)
	{
		cout << "\n Hahahahaha. You lost, you are noo0o0o000ooooo0o0o000oob.";
	}
	else if (sumpl2 = sumen2)
	{
		cout << "\n Augh... It`s a draw. You played like... BOT. Hahahahahhahaahah. ";
	}
}
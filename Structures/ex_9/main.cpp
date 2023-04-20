#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Weather
{
	string data;
	int temp;
	int press;
};

int main()
{
	Weather weather[5];

	weather[0] = { "20.04.23" , 10, 737 };
	weather[1] = { "21.04.23" , 11, 737 };
	weather[2] = { "22.04.23" , -5, 840 };
	weather[3] = { "23.04.23" , -1, 810 };
	weather[4] = { "24.04.23" , 7, 831 };

	ofstream write("weather.txt");

	for (size_t i = 0; i < 5; i++)
	{
		write << weather[i].data << " " << weather[i].temp << " " << weather[i].press << endl;
	}

	write.close();

	ifstream read("weather.txt");

	string line;

	while (getline(read, line))
	{
		istringstream ss(line);

		string data;
		int temp;
		int press;

		ss >> data >> temp >> press;

		if (temp < 0)
		{
			cout << data << " " << temp << "C " << press  << "mm" << endl;
		}

	}

	read.close();
}
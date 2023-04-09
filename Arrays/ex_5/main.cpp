#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	int lenght, height;
	char angle, speed;
	char symbol;
	cout << "Enter lenght: ";
	cin >> lenght;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter symbol: ";
	symbol = getchar();
	cin >> symbol;
	cout << "Enter angle [ vertical - v - | horizontal - h -] ";
	cin >> angle;
	cout << "Choose speed [ fast - f - | normal - n - | slow - s - ] ";
	cin >> speed;
	switch (angle)
	{
	case 'v': {
		if (speed == 'f')
		{
			for (size_t i = 0; i < height; i++)
			{
				cout << symbol << '\n';
				this_thread::sleep_for(std::chrono::milliseconds(250));
			}
			
		}
		if (speed == 'n')
		{
			for (size_t i = 0; i < height; i++)
			{
				cout << symbol << '\n';
				this_thread::sleep_for(std::chrono::milliseconds(750));
			}
		}
		if (speed == 's')
		{
			for (size_t i = 0; i < height; i++)
			{
				cout << symbol << '\n';
				this_thread::sleep_for(std::chrono::milliseconds(1250));
			}
		}
		
	}break;
	case 'h': {
		if (speed == 'f')
		{
			for (size_t i = 0; i < lenght; i++)
			{
				cout << symbol << ' ';
				this_thread::sleep_for(std::chrono::milliseconds(250));
			}
		}
		if (speed == 'n')
		{
			for (size_t i = 0; i < lenght; i++)
			{
				cout << symbol << ' ';
				this_thread::sleep_for(std::chrono::milliseconds(750));
			}
		}
		if (speed == 's')
		{
			for (size_t i = 0; i < lenght; i++)
			{
				cout << symbol << ' ';
				this_thread::sleep_for(std::chrono::milliseconds(1250));
			}
		}
		
	}break;
	default:
		break;
	}
}
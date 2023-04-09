#include <iostream>
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;

int main() {
	//*****************PATH*****************//
	size_t path_AB;
	size_t path_BC;
	cout << "Enter path from A to B (km): ", cin >> path_AB;
	cout << "Enter path from B to C (km): ", cin >> path_BC;
	//*****************PATH*****************//
	

	
	//*****************FUEL*****************//
	size_t fuel_full, fuel_l500, fuel_l1000, fuel_l1500, fuel_l2000, fuel_left;
	int fuel_in_tank, fuel_add;
	fuel_full = 300;
	fuel_l500 = 1;
	fuel_l1000 = 4;
	fuel_l1500 = 7;
	fuel_l2000 = 9;
	//*****************FUEL*****************//

	int on_plane{};

	
	//*****************IF*****************//
	cout << "Enter your added weight(kg): ";
	size_t weight;
	cin >> weight;
	if (weight >= 0 && weight < 500)
	{
		on_plane = 1;
	}

	else if (weight >= 500 && weight < 1000)
	{
		on_plane = 4;
	}

	else if (weight >= 1000 && weight < 1500)
	{
		on_plane = 7;
	}

	else if (weight >= 1500 && weight < 2000)
	{
		on_plane = 9;
	}
	//*****************IF*****************//


	//*****************CASE*****************//
	switch (on_plane)
	{
	case 1:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l500);
		if (fuel_in_tank < 0)
		{
			fuel_in_tank = (path_AB * fuel_l500) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "You will not reach the B from A. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << fuel_in_tank << " (l) will left in tank after travel from A to B.";
			fuel_add = fuel_in_tank - (path_BC * fuel_l500);
			if (fuel_add < 0)
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout << "\nYou must add " << (path_BC * fuel_l500) - fuel_in_tank << " (l) to reach the C.";
			}
		}


		if (fuel_full < (path_BC * fuel_l500))
		{
			fuel_in_tank = (path_BC * fuel_l500) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "\nYou will not reach the B from C. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank << " (l)";
		}
		else if (fuel_in_tank >= (path_BC * fuel_l500))
		{
			fuel_in_tank = fuel_in_tank - (path_BC * fuel_l500);
			SetConsoleTextAttribute(hConsole, 10);
				cout << "\n" << fuel_in_tank << " (l) will left in tan after travel from B to C.";
		}
	}break;

	case 4:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l1000);
		if (fuel_in_tank < 0)
		{
			fuel_in_tank = (path_AB * fuel_l1000) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "You will not reach the B from A. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << fuel_in_tank << " (l) will left in tank after travel from A to B.";
			fuel_add = fuel_in_tank - (path_BC * fuel_l1000);
			if (fuel_add < 0)
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout << "\nYou must add " << (path_BC * fuel_l1000) - fuel_in_tank << " (l) to reach the C.";
			}
		}


		if (fuel_full < (path_BC * fuel_l1000))
		{
			fuel_in_tank = (path_BC * fuel_l1000) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "\nYou will not reach the B from C. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank << " (l)";
		}
		else if (fuel_in_tank >= (path_BC * fuel_l1000))
		{
			fuel_in_tank = fuel_in_tank - (path_BC * fuel_l1000);
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\n" << fuel_in_tank << " (l) will left in tan after travel from B to C.";
		}
	}break;

	case 7:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l1500);
		if (fuel_in_tank < 0)
		{
			fuel_in_tank = (path_AB * fuel_l1500) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "You will not reach the B from A. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << fuel_in_tank << " (l) will left in tank after travel from A to B.";
			fuel_add = fuel_in_tank - (path_BC * fuel_l1500);
			if (fuel_add < 0)
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout << "\nYou must add " << (path_BC * fuel_l1500) - fuel_in_tank << " (l) to reach the C.";
			}
		}


		if (fuel_full < (path_BC * fuel_l1500))
		{
			fuel_in_tank = (path_BC * fuel_l1500) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "\nYou will not reach the B from C. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank << " (l)";
		}
		else if (fuel_in_tank >= (path_BC * fuel_l1500))
		{
			fuel_in_tank = fuel_in_tank - (path_BC * fuel_l1500);
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\n" << fuel_in_tank << " (l) will left in tan after travel from B to C.";
		}
	}break;

	case 9:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l2000);
		if (fuel_in_tank < 0)
		{
			fuel_in_tank = (path_AB * fuel_l2000) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "You will not reach the B from A. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << fuel_in_tank << " (l) will left in tank after travel from A to B.";
			fuel_add = fuel_in_tank - (path_BC * fuel_l2000);
			if (fuel_add < 0)
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout << "\nYou must add " << (path_BC * fuel_l2000) - fuel_in_tank << " (l) to reach the C.";
			}
		}


		if (fuel_full < (path_BC * fuel_l2000))
		{
			fuel_in_tank = (path_BC * fuel_l2000) - 300;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "\nYou will not reach the B from C. You will running out of fuel." << " There was not enough fuel: " << fuel_in_tank << " (l)";
		}
		else if (fuel_in_tank >= (path_BC * fuel_l2000))
		{
			fuel_in_tank = fuel_in_tank - (path_BC * fuel_l2000);
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\n" << fuel_in_tank << " (l) will left in tan after travel from B to C.";
		}
	}break;
	default:
		break;
	}
	//*****************CASE*****************//
	
}
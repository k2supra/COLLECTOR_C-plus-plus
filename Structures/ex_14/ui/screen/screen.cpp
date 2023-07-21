#include "screen.h"

User* current_user;

int Screen::reg()
{
	system("cls");
	cout << "<----------- REGISTRATION ----------->\n";
	string name;
	cout << "Input name\n-> ";
	cin >> name;
	string password;
	cout << "Input password\n-> ";
	cin >> password;
	auto* user = new User(name, password, true);
	auto* user_provider = new UserProvider();
	if (user_provider->addUser(user) == -1)
	{
		return -1;
	}

	delete user;
	delete user_provider;
	system("cls");
}

int Screen::login()
{
	system("cls");
	cout << "<--------------- LOGIN --------------->\n";

	string name;
	cout << "Input name\n-> ";
	cin >> name;
	string password;
	cout << "Input password\n-> ";
	cin >> password;
	bool isClient;
	cout << "Input account type\n-> ";
	cin >> isClient;

	current_user = new User(name, password, isClient);

	vector<User> userdata;
	auto* user_provider = new UserProvider();
	user_provider->readUserData(userdata);

	if (!user_provider->userExists(current_user, userdata))
	{
		cout << "Error: there is no such user or your input is wrong!\n";
		system("pause>0");
		return -1;
	}
	system("cls");

	delete user_provider;
	return 0;
}

int Screen::menu()
{
	cout << "<--------------- MENU --------------->\n";
	int isRegistered;
	cout << "Are you registered? (1 - yes; 0 - no)\n-> ";
	cin >> isRegistered;

	if (!isRegistered)
	{
		// register loop
		while (reg() == -1) // if error occurs, user tries to register again
		{
			reg();
		}
	}
	else if (isRegistered != 1)
	{
		cout << "Error: wrong input!\n";
		return -1;
	}

	// login loop
	while (login() == -1)
	{
		login();
	}

	if (current_user->getIsClient())
	{
		client_screen = new ClientScreen();
		client_screen->menu();
	}
	else
	{
		admin_screen = new AdminScreen();
		admin_screen->menu();
	}
	return 0;

}


#pragma once
#include "../../lib/lib.h"
#include "client/client_screen.h"
#include "admin/admin_screen.h"
#include "../../core/user/user.h"
#include "../../core/user_provider/user_provider.h"

struct Screen
{
public:
	int reg();   // register
	int login(); // login
	int menu();  // menu

private:
	ClientScreen* client_screen;
	AdminScreen* admin_screen;
};

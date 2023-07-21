#include "lib/lib.h"
#include "core/pc/pc.h"
#include "ui/screen/screen.h"
#include "core/pc_provider/pc_provider.h"

int main()
{
	auto* screen = new Screen();
	screen->menu();

	return 0;
}
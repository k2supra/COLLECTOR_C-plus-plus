#include "pattern.h"

int main()
{
	FactoryOfWeapon* sword = new FactoryOfSword();
	sword->createWeapon();
	cout << endl;

	cout << "CLONE" << endl;
	PrototypeFactory prot_sword;
	Prototype* clone_sword = prot_sword.createClone(Weapon_for_clone::SWORD);

}
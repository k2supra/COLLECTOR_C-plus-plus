#include "pattern.h"

int main()
{
	FactoryOfWeapon* sword = new FactoryOfSword();
	sword->createWeapon();
	cout << "CLONE" << endl;
	PrototypeFactory prot_sword;
	Prototype* clone_sword = prot_sword.createClone(Weapon_for_clone::SWORD);
	/*PrototypeFactory prot_fact;

	Prototype* clone1 = prot_fact.createClone(Weapon_for_clone::SWORD);*/
	//clone1->clone();

	
	/*FactoryOfWeapon* sword = dynamic_cast<FactoryOfWeapon*>(prot_fact.createClone(Weapon_for_clone::SWORD));
	performing(*sword);
	delete sword;*/




	/*FactoryOfWeapon* fow = new FactoryOfBow();
	performing(*fow);
	cout << endl;
	FactoryOfWeapon* fow2 = new FactoryOfSword();
	performing(*fow2);
	cout << endl;
	FactoryOfWeapon* fow3 = new FactoryOfDagger();
	performing(*fow3);
	cout << endl;*/
}
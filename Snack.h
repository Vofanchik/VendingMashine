#pragma once
#include <iostream>
using namespace std;


class Snack
{
public:
	Snack(string name);
	friend ostream &operator<<(ostream &output, const Snack &m);
private:
	string snackName;
};

class SnackSlot
{
public:
	SnackSlot(int count);
	~SnackSlot() = default;
	int getVoidSpace();
	int getcountSnack();
	void addSnack(Snack* snack);

private:
	int countSnack;
	int voidSpace;
};

class VendingMachine
{
public:
	VendingMachine(int size);
	~VendingMachine()=default;
	void addSlot(SnackSlot* slot);
	int getEmptySlotsCount();

private:
	int slotsSize;
	int voidSlots;
};







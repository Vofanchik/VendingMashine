#include "Snack.h"
using namespace std;

Snack::Snack(string name)
{
	snackName = name;
}

ostream& operator<<(ostream& output, const Snack& m) {
	output << m.snackName<<endl;
	return output;
}

SnackSlot::SnackSlot(int count) {
	countSnack = count;
	voidSpace = count;
}

int SnackSlot::getVoidSpace() {
	return voidSpace;
}

int SnackSlot::getcountSnack() {
	return countSnack;
}

void SnackSlot::addSnack(Snack* snack) {	
	if (voidSpace != 0){
		voidSpace--;
		cout << "�������� " << *snack << " �������� " << getVoidSpace() << " �� " << getcountSnack() << endl; }
	else
	{
		cout << "����� ������ ��� " << endl;
	}
}


VendingMachine::VendingMachine(int size)
{
	slotsSize = size;
	voidSlots = size;
}



void VendingMachine::addSlot(SnackSlot* slot) {
	voidSlots--;
	cout << "�������� ���� � " << slot->getcountSnack() - slot->getVoidSpace() << " �������" << endl;
}

int VendingMachine::getEmptySlotsCount() {
	return voidSlots;
}




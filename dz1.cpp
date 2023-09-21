#include <iostream>
using namespace std;
void print(char* surname, char* name, char* number, double zp)
{
	cout << surname << "\t" << name << "\t" << number << "\t" << zp << endl;
}
void addrab(char* surname, char* name, char* number, double zp)
{
	cout << "Enter Surname:";
	cin >> surname;
	cout << "Enter Name:";
	cin >> name;
	cout << "Enter Phone number:";
	cin >> number;
	cout << "Enter Zarplata";
	cin >> zp;
}
void delrab(char* surname, char* name, char* number, double zp)
{
	surname = nullptr;
	name = nullptr;
	number = nullptr;
	zp = 0;
}
int  searchzp(double zp, int size , double searcheble2)
{
	cout << "Enter zp:" << endl;
	cin >> searcheble2;
	for (double zp; zp < size; zp++)
	{
		if (searcheble2 != zp)
		{
			zp++;
		}
	}
	cout << searcheble2;
}

int main()
{
	const int size =100;
	char* surname [size];
	char* name [size];
	char* number [size];
	double zp [size];
	double searcheble2;
}

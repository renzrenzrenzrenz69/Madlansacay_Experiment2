#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	
	char choice;
	int h;

	cout << "Which package did you choose? \n"; 
	cout << "Package [A]: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";	cout << "Package [B]: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
	cout << "Package [C]: For P1995/mo of unlimited access is provided.\n";
	cin >> choice;
	cout << "How many hours were used?\n"; 
	cin >> h;

	switch(choice)
	{
	case 'a':
	case 'A':
		if (h>=10)
		cout << "The total amount due is"" " << 995 + (h-10)*20 << endl;
		else
			cout << "The total amount due is P995";
		break;
	case 'b':
	case 'B':
		if (h>=20)
		cout << "The total amount due is"" " << 1495 + (h-20)*10 << endl;
		else
			cout << "The total amount due is P1495";
	    break;
	case 'c':
	case 'C':
		cout << "The total amount due is P1995"<< endl;
		break;
	default:
		cout << "Please choose either A, B or C only for the package";
	}
_getch();
return 0;
}
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	int c, b;
	cout << "Enter amount of consumption\n";
	cin >> c;
	cout << "Enter customet's unpaid balance\n";
	cin >> b;
	if (b==0)
		cout << "The customer's monthly bill is " "P " << c*(1.10) + 35 << endl;
	else
		cout << "The customer's monthly bill is " "P " << c*(1.10) + 35 +20 << endl;
_getch();
return 0;
}
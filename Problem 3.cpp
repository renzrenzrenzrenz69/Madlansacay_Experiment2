#include <iostream>
#include <conio.h>
#include <cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	
	
	int x,y;
	const double z = 2.5;
	cout << "Enter value of x \n"; 
	cin >> x;
	cout << "Enter value of y \n";
	cin >> y;
	

	switch(x)
	{
	case 1:
		if (y>1 && y<5)		
			std::cout << std::setprecision(2) << setw(10) << " V is:" "" << x*y*z << endl;
		else if (y>=5)
			std::cout << std::setprecision(2) << setw(10) <<"V is:" "" << x + (y/z) <<  endl;
		else
			std::cout << std::setprecision(2) << setw(10) << "invalid";
		break;
	case 2:
		if (y<=5)
		std::cout << std::setprecision(2) << setw(10) << " V is:" "" << abs((x-y)/z) << endl;
		else if (y>5)
		std::cout << std::setprecision(2) << setw(10) <<"f V is:" "" << x-sqrt(y+z) << endl;
		else
		std::cout << std::setprecision(2) << setw(10) << "Invalid";
		break;	
	default:
		cout << setw(10) << " V is:" "" << x + y + z << endl;


	}
_getch();
return 0;
}
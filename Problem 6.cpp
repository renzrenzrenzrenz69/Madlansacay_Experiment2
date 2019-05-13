#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	int n,f,m;
	
	do
	{
		cout << "Enter a number\n";
		cin >> n;
		if(n <= 0)
		{
		f = 0;
		}
		else
		{
			f = 0;

	for (m=1; m <= n; ++m) 
	{
		f += m;
	}
	cout << "The sum of all whole numbers from 1 to " << n <<" " "is" " " << f << "\n" << endl;
		}	
	
	}
	while (n!=0 && n >=0);
	
      cout << "Thank you!";
	
_getch();
return 0;
}

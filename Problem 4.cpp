#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
	int counter;
	cout << "Counting...\n";
	for(counter=1; counter <=10; counter++)
		{
			cout << counter << ",";
		}
			for(counter > 10; counter <=30; counter++)
		{
			if (counter % 2 == 0)
			cout << counter << ",";
		}


_getch();
return 0;
}
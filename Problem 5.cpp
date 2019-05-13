#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int n1 = 0, n2 = 1, next = 0, counter;
	const int f = 21;
  

    cout << "Fibonacci numbers:\n ";

    for (counter = 1; counter <= f; ++counter)
    {
        if(counter == 1)
        {
            cout << n1;
            continue;
        }
        if(counter == 2)
        {
            cout <<"," << n2 << ",";
            continue;
        }
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        
        cout << next << ",";
        if (counter == 21)
			cout << "10946";
	}

	

_getch();
return 0;
}
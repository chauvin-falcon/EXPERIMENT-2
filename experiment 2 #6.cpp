#include <iostream>
#include <conio.h>

using namespace std;
int main()


{bool coaster = false;
do 
{ int n1, n3=0;
	cout << "enter a number: "; 
	cin >> n1;
		
	if (n1>0)
	{ for (int n2=1; n2 <= n1; n2++)
	{n3+= n2;}
cout << " the sum of all whole numbers from 1 to "<< n1 <<" is " << n3<< "." << endl;}
			
else { cout << "thank you!" << endl;
break;}
} while (!coaster);	
	
getch();
return 0;

}

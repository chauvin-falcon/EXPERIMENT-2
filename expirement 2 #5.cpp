#include<iostream>
#include <conio.h>

using namespace std;
int main()

{
int f1=0, f2=1, f3, f4=2, f5=2+20;
cout << "Fibonacci numbers:\n";
cout << f1 << "," << f2 << ",";
	for (f4; f4 < f5; f4++)
	{f3= f1 + f2; f1=f2; f2=f3;
	cout << f3 << ",";}
		
cout << "\b ";
	
	getch ();
	return 0;
}

#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{ int x, y; 
float V;
const float z = 2.5; 

cout << "enter value of x: ";
cin >> x;
cout << "enter value for y: "; 
cin >> y;

switch (x)
{ case 1: 
if (1<y<5)
{ V= x * y * z;}
else if (y>=5)
{ V=x+ (y/z); } 
break;

case 2: 
if (y<=5)
{ V= fabs(( x-y)/z);}
else if (y>5)
{ V=x- (sqrt(y+z)); }break;

default:
V=x+y+z;
break;
}

cout << "\n the value for V is \n" << setw(10) << fixed << setprecision(2) << V;


getch();
return 0;
}

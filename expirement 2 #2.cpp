#include <iostream>
#include <conio.h>

using namespace std;
int main()

{ int usedgallons;
float pastmonth, totalcost;
const float demandcharge = 35, concharge = 1.10; 

cout << " unpaid amount from the past month: "; 
cin >> pastmonth;
cout <<" gallons consumed in the current month: ";
cin >> usedgallons;

if(pastmonth < 0 || usedgallons < 0)
cout << "\nInvalid amount!" << endl; 

else if (pastmonth > 0)

{ totalcost = demandcharge + (concharge* usedgallons) + pastmonth + 20;
cout << "\nYour water bill cost: P" << totalcost << endl; } 

else 

{ totalcost = demandcharge + (concharge * usedgallons); 
cout << "\nYour water bill cost: P" << totalcost << endl;}

getch();
return 0;

}

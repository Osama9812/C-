#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
 double falt[3];
 cout<<"mata in 3 decimal tal=";
 cin>> falt[0]>>falt[1]>>falt[2];
 double summa = falt[0]+falt[1]+falt[2];
 double medelvarde = summa / 3;
 cout<<"summan av tre talen bli=" << summa << endl;
 cout<<"medelvarde blir= "<< medelvarde<< endl;
 
 return 0;
  
}  
 

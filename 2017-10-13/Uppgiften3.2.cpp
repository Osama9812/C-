#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
 int falt[]= {3,5,4,2};
 cout<< falt[0] <<' '<< falt[1] << falt[2] << falt[3]; 
 int temp = falt[0];
 falt [0] = falt[2];
 falt [2] = falt[1];
 falt [4] = temp;
 cout<< falt[0] <<' '<< falt[2] << falt[2] << ' ' << falt[1]; 
 return 0;
  
}  
 
 

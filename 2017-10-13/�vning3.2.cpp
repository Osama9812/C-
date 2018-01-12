#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
  
  double tid []={9.98,10.15};
  cout <<"fälet innhåller följande tider"<<endl;
  cout<< tid[0] <<"\t"<< tid[1]<<endl;
  
  
  double tmp;
  
  //ALogritm för att bryta plats på
  // två värden i ett fält 
  tmp= tid[0];
  tid[0] = tid[1];
  tid[1] = tmp;
  
  
 return 0;
  
}  
 
 

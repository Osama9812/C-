#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
  
  double tid []={9.98,10.15};
  cout <<"f�let innh�ller f�ljande tider"<<endl;
  cout<< tid[0] <<"\t"<< tid[1]<<endl;
  
  
  double tmp;
  
  //ALogritm f�r att bryta plats p�
  // tv� v�rden i ett f�lt 
  tmp= tid[0];
  tid[0] = tid[1];
  tid[1] = tmp;
  
  
 return 0;
  
}  
 
 

#include<iostream>
using namespace std;
int main ()
{
  int falt[] = {-3,45,-4,57,-21,5,-5,0,5.-6};
  //startvärde; vilkor; ändring
  for(int i=0; i < 10; i++)
  {
    cout << falt[i] << " ";
  }
  cout << endl;
  
  for(int i=0; i < 10; i++) //en ny variabel
  {
     
    for (falt[i] >0) 
      falt[i] = falt [i] * (-1);
   
  }
  
  for(int i=0; i < 10; i++) //en till ny variabel
  {
    
    for (falt[i] >0) 
      falt[i] = falt [i] * (-1);
     
  }
  return 0;
  
}
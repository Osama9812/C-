#include <iostream> 
using namespace std;
//switch-case, sidan 90
int main()


{
  int older;
  cout << "Hur gammal �r du? ";
  cin >> older;
  
  if(older < 65 && older > 15)
  {
       cout << "Du b�r resan kosta 10 kronor ";
   
       
  }
 
  else
  {
       cout << " Resan kostar 15 kronor "<< endl;
  }
  
  
return 0;  
}
 
 
 

#include <iostream>
using namespace std;
// uppgift 2
int main()
{

for(int n = 1 ; n<=20; n++)
  
{
  for(int i = 1; i<=20 ; i++)
  {
   int m = i%2; 
   if (m == 1)
   cout << "0" << " ";
   else 
    cout << "1" << " "; 
   
  }
  cout << endl;
}

return 0;
} 
 
 
 

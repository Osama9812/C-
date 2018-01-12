//antalet råttor i kattbo human är för närvarande 100st.
// antalet fordubblas varje månad. Hur många tar det innan 
// antalet råttor uppmått 1 miljon 
#include<iostream>
using namespace std;
int main ()
{
  const int max_antal = 1000000;
  int antal = 100;
  int antal_manader=0;
  
  while (antal < max_antal)
    
  {
    antal_manader++;
    antal = antal * 2;
  }
   
   cout << "efter " << antal_manader << "hela månder är antalet råttor " <<  antal << endl;
  
  
  
  
 
  return 0;
  
}
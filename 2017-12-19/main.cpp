//antalet r�ttor i kattbo human �r f�r n�rvarande 100st.
// antalet fordubblas varje m�nad. Hur m�nga tar det innan 
// antalet r�ttor uppm�tt 1 miljon 
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
   
   cout << "efter " << antal_manader << "hela m�nder �r antalet r�ttor " <<  antal << endl;
  
  
  
  
 
  return 0;
  
}
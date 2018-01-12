//exempel på meny
// räkna ut summan av en kunds varor 
// Menyval
// avsluta 
//nykund 
// fortsätta
#include<iostream>
using namespace std;
int main ()
{
  char val;
  float summa=0, pris;
  while ( val != 'a')
  {
  cout << " *** Meny *** " << endl;
  cout << " *** Ny Kund (n) *** " << endl;
  cout << " *** Avsluta (a) *** " << endl;
  cout << " *** fortsätta mata in varor (f) *** " << endl;
  
  if ( val == 'n')
    summa=0;
  else if (val == 'f')
  {
    cout << " varans pris (kronor) ";
    cin >> pris;
    summa = summa + pris;
    cout << "du har handlat för " << summa << "kronor\n\n";
  }
    
  }
 
  return 0;
  
} 

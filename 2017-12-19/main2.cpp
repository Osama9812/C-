//exempel p� meny
// r�kna ut summan av en kunds varor 
// Menyval
// avsluta 
//nykund 
// forts�tta
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
  cout << " *** forts�tta mata in varor (f) *** " << endl;
  
  if ( val == 'n')
    summa=0;
  else if (val == 'f')
  {
    cout << " varans pris (kronor) ";
    cin >> pris;
    summa = summa + pris;
    cout << "du har handlat f�r " << summa << "kronor\n\n";
  }
    
  }
 
  return 0;
  
} 

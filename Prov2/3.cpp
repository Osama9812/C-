#include <iostream>
using namespace std;
// uppgift 2
int main()
{
int falt[199];
int antal;

cout << "Mata in fr�n 2 till 200 tal\n";
cout << "Mata in heltal, 48-57, 65-90 och 97-122 �r tillatna\n";
cout << "Hur manga heltal vill du mata in ";
cin >> antal;

for (int n = 1 ; n<=antal; n++) // programmet ska k�ras beror p� hur m�nga g�ngar anv�ndare vill
{
  cout << "mata in talen: ";
  cin >> falt[n];
  
  if (48<=falt[n] && falt[n]<=57)//om talen som du matade in �r mellan 48 och 57 d� skriver programmet f�ljande 
  {
    cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else if (65<=falt[n] && falt[n]<=90)//om talen som du matade in �r mellan 65 och 90 d� skriver programmet f�ljande 
  {  
   cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else if (97<=falt[n] && falt[n]<=122)//om talen som du matade in �r mellan 97 och 122 d� skriver programmet f�ljande 
  {
    cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else //Annars skriver programmet f�ljande
  {
    cout << "Felakigt varde: " << endl;  
  }
  
  
}
  

return 0;
} 
 
 
 


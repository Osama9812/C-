#include <iostream>
using namespace std;
// uppgift 2
int main()
{
int falt[199];
int antal;

cout << "Mata in från 2 till 200 tal\n";
cout << "Mata in heltal, 48-57, 65-90 och 97-122 är tillatna\n";
cout << "Hur manga heltal vill du mata in ";
cin >> antal;

for (int n = 1 ; n<=antal; n++) // programmet ska köras beror på hur många gångar användare vill
{
  cout << "mata in talen: ";
  cin >> falt[n];
  
  if (48<=falt[n] && falt[n]<=57)//om talen som du matade in är mellan 48 och 57 då skriver programmet följande 
  {
    cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else if (65<=falt[n] && falt[n]<=90)//om talen som du matade in är mellan 65 och 90 då skriver programmet följande 
  {  
   cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else if (97<=falt[n] && falt[n]<=122)//om talen som du matade in är mellan 97 och 122 då skriver programmet följande 
  {
    cout << "Motsavarnde tecekn ar: " << (char)falt[n] << endl;
  }
  else //Annars skriver programmet följande
  {
    cout << "Felakigt varde: " << endl;  
  }
  
  
}
  

return 0;
} 
 
 
 


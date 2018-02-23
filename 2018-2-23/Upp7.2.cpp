#include <iostream>
#include <string>
using namespace std;
int main()
{

double avstand, lange; 
char boende;
cout << " Hur lång avstand är det till arbetet? ";
cin >> avstand;
cout << " Bor du sjalv eller med någon? ";
cin >>  boende;
cout << " For hur länge?";
cin >> lange;

if ((avstand > 50) && (boende == 's') && (lange < 1))
{ 
cout << "Du har ratt " << endl;
}

else if  ((avstand > 50) && (boende == 'n') && (lange < 3))
{
cout << "Du har ratt" << endl;
}

else 
{
 cout << "Du har inte ratt" << endl;
}
 
 return 0;
} 
 

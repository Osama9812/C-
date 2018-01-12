#include <iostream>
using namespace std;
int main ()

{ 
  /*
   * datatyp variabelnämn
   * */
  
  int tal1; 
  int tal2;
	      //plats för
	      // en int
	      //allokeras
	      // (bokas)
	      
  // antal = 4; // antal
	       // tilldelas
	       // värdet 4
	     
	     
   // inmatning från tangentbord
   cout << " mata in heltal 1: ";
   cin >> tal1;	   
   cout << " mata in heltal 2: ";
   cin >> tal2;
   int summa = tal1+tal2; 
   /*
    * int summa
    * summa = tal1+tal2;
    */
   cout << "summan av talen blir" << summa << endl;
   
   return 0;
}

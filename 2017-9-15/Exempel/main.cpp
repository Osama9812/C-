#include <iostream>
using namespace std;
int main ()

{ 
  /*
   * datatyp variabeln�mn
   * */
  
  int tal1; 
  int tal2;
	      //plats f�r
	      // en int
	      //allokeras
	      // (bokas)
	      
  // antal = 4; // antal
	       // tilldelas
	       // v�rdet 4
	     
	     
   // inmatning fr�n tangentbord
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

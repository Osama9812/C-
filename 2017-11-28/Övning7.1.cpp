#include <iostream> 
using namespace std;
//switch-case, sidan 90
int main()


{
  char svar;
  cout << "Vill du testa en villkorssats? (j/n) ";
  cin >> svar;
  
  if(svar == 'j')
  {
       cout << "Du svarde ja, Det verker fungera!";
       
  }
 
  else
  {
       cout << "Du svarade nej";
  }
  
  
return 0;  
}
 

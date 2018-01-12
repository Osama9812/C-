#include <iostream>
#include <string>
using namespace std;
int main()
{
  
  string strang = "lektonsasal";
  cout << strang << endl;
  strang = "kul";
  cout << strang << endl;
  int langd = strang.size();
  cout << langd<< endl;
  int hitta = strang.find('u',2);
  cout << hitta << endl;
  
  return 0;
  
}  
 

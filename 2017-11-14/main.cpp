#include <iostream>
#include <string> 
using namespace std;
int main()
{
  //teckenfält, c-stränger
  // du kan storleken när
  // strängen skapas
  // du måste deklarera den innan 
  
  /*
  char namn[100]; // 0-99
  namn [66]='A';// helatal 65
  cout << namn [66]<< endl;
  //funkar bara med charfält
  char fnamn []="BEngt";
  cout << fnamn << endl;
  
  
  char hel[100]; // 0-99
  hel [66]= 65 ;// helatal 65
  cout << hel [66]<< endl;
   
  string s;
  s = "Marks ";
  string s1 = "Gymnasieskola";
  s = s + s1;
  cout << s << endl;
  cout << s+ "Gymnasieskola" << endl;
  s.at(0)= 'P';
  cout << s << endl;
  int antal = s.size();
  cout << antal << endl;
  
  //vi söker efter positionen 
  // där "Gym" börjar
  int hitta = s.find('a',0);
  int hitta2 = s.find("asi",0);
  cout << hitta << hitta2 << endl;
  // vi plockar ut 8 tecekn ur s
  // mmed start där "Gym" börjar
  // och placerar detta i stringen 
  // delstring 
  string delstring = s.subustr(hitta,7);
  cout << delstring << endl;
  */
  
  // inmatning 
  string namn;
  int alder;
  //cin>> namn;
  getline(cin, namn);
  cout << namn << endl;
  cin >> alder;
  string namn2;
  ignore
  getline(cin, namn2);
  cout << namn2 << endl;
  
  return 0;
  
}
  

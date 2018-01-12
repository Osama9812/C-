#include <iostream> 
using namespace std;
//switch-case, sidan 90
int main()


{
  double bensin;
  cout << "Hur mycket bensin finns det? ";
  cin >> bensin;
  
  if(bensin < 10)
  {
       cout << "Du bör tanka snart ";
       cout << 50-bensin << " liter som du kan tanka"<< endl;
       cout << "och kostnd är " << (50-bensin) * 9.50 << " kronor"<<endl;
       
  }
 
  else
  {
       cout << " kör bara "<< endl;
  }
  
  
return 0;  
}
 
 

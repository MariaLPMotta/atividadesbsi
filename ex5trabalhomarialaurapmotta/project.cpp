#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main (int argc, char** argv){
  int i;
  cout <<"Insira um numero: \n";
  cin >> i;
  if (i >= 0)
  {
  cout << "O numero : " << i << "e positivo\n";

  }
 if ( i < 0)
 {
    cout << "O numero : " << i << " e negativo\n";
 }
 
    
    
    return 0;
}
#include <iostream>     //Ces deux lignes seront omises
using namespace std;    //dans la suite

// Fonction factorielle
int factorielle (int n){
  if (n == 0){
    return 1;
  }
  return factorielle (n-1) * n;
}
// appel a factorielle(3)

int main (){
  cout << factorielle(3);
  return 0;
}

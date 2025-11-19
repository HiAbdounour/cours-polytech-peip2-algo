#include <iostream>     //Ces deux lignes seront omises
using namespace std;    //dans la suite

// Fonction factorielle
int factorielle (int n){
  return factorielle (n-1) * n;
}

int main (){
  cout << factorielle(3);
  return 0;
}

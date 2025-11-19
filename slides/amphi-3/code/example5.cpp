#include <iostream>     //Ces deux lignes seront omises
using namespace std;    //dans la suite

// Tri par insertion, version recursive
void triInsertion (int n, int tab[]){
  if (n == 0){
    return;
  }
  triInsertion(n-1, tab);
  inserer(n, tab);
}

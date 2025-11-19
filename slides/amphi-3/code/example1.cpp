#include <iostream>     //Ces deux lignes seront omises
using namespace std;    //dans la suite

// Diviser par 2 les nombres pairs et renvoyer le minimum
int diviserParDeux (int n, int tab[]){
  int min = tab[0];
  for (int i = 0; i < n; i++){
    if (tab[i]%2 == 0){
      tab[i] = tab[i]/2;
    }
    if (min > tab[i]){
      min = tab[i];
    }
  }
  return min;
}

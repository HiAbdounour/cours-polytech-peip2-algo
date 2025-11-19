#include <iostream>     //Ces deux lignes seront omises
using namespace std;    //dans la suite

// Somme de tous les elements d'une matrice
int sommeMatrice (int n, int m, int** mat){
  int s = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      s = s + mat[i][j];
    }
  }
  return s;
}

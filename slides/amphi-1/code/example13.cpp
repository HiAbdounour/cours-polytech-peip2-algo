#include <iostream>
using namespace std;

void afficher (int n, int t[]){
 for(int i = 0; i < n; i++){
    cout << i << " : " << t[i] << ", ";
  }
}

void echangerPrems (int a[]){
  int z = a[0]; a[0] = a[1]; a[1] = z;
}

int main (){
  int a[4] = {0, 1, 2, 3};
  echangerPrems(a);
  afficher(4, a);
  return 0;
}

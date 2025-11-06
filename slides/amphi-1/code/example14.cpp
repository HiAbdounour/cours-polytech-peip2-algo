#include <iostream>
using namespace std;

void echanger (int a[], int b[]){
  int z[1];
  z = a; a = b; b = z;
}

int main (){
  int a[1] = {0};
  int b[1] = {1};
  echanger(a,b);
  cout << "a[0] = " << a[0] << " et b[0] = " << b[0];
  return 0;
}

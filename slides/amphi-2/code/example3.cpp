#include <iostream>
using namespace std;

int main (){
  int x = 0, y = 1;
  // On veut echanger la valeur de x et y
  int z = x; x = y; y = z;
  cout << "x = " << x << " et y = " << y;
  return 0;
}

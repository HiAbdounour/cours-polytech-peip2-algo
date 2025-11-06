#include <iostream>
using namespace std;

void echanger (int &x, int &y){
  int z = x; x = y; y = z;
}

int main (){
  int x = 0, y = 1;
  echanger(x,y);
  cout <<  "x = " << x << " et y = " << y;
  return 0;
}

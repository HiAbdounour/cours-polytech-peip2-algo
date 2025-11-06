#include <iostream>
using namespace std;

int fahren (int x){
  return 1.8 * x + 32;
}

int main (){
  int x = 30;
  cout << x << " Celsius = " << fahren(x) << " Fahrenheit";
  return 0;
}

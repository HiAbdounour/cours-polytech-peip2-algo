#include <iostream>
using namespace std;

void print (int n, int t[]){
 for(int i = 0; i < n; i++){
    cout << i << " : " << t[i] << ", ";
  }
}

int main (){
  int t[5] = {10, -7, 42, 0, 10};
  print(5, t);
  return 0;
}

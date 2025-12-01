#include <iostream>
using namespace std;

int fibonacci (int n){
  if (n == 0){return 0;}
  if (n == 1){return 1;}
  return fibonacci (n-1) + fibonacci (n-2);
}

int fibonacci_memo_aux (int n, int memo[]){
  if (n == 0){return 0;}
  if (n == 1){return 1;}
  if (memo[n] == -1){
    int resultat = fibonacci (n-1) + fibonacci (n-2);
    memo[n] = resultat;
  }
  return memo[n];
}

int fibonacci_memo(int n){
  int memo[n];
  for (int i = 0; i<n; i++){
    memo[i] = -1;
  }
  return fibonacci_memo_aux (n, memo);
}

int main (){
  fibonacci(20);
  fibonacci_memo(100);
  return 0;
}

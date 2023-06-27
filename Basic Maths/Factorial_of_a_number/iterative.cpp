#include <iostream>

using namespace std;

int factorial(int n){
  int fact=1;
  while(n>0){
    fact*=n;
    n--;
  }
  return fact;
}

int main(){
  int n;
  cin >> n;
  cout << factorial(n);
  return 0;
}


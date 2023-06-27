#include <iostream>

using namespace std;

int trailingZero(int n){
  int zero=0;
  for(int i=5; i<=n; i*=5){
    zero += n/i;
  }
  return zero;
}

int main(){
  int n;
  cin >> n;
  cout << trailingZero(n);
  return 0;
}


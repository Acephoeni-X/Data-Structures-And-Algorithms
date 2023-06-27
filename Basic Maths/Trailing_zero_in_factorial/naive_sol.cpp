#include <iostream>

using namespace std;

int factorial(int n){
  if(n==0)
    return 1;
  return factorial(n-1)*n;
}

int trailZero(int n){
  int trail=0;
  while(n>0){
    if (n%10 == 0){
      trail++;
      n/=10;
    }
    else
      return trail;
  }
  return trail;
}

int main(){
  int n;
  cin >> n;
  int fact = factorial(n);
  cout << trailZero(fact);
  return 0;
}


#include <iostream>

using namespace std;

int recur(int n){
  if (n==0)
    return 1;
  return recur(n-1)*n;
}

int main(){
  int n;
  cin >> n;
  cout << recur(n);
  return 0;
}


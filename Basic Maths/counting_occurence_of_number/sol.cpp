#include <iostream>

using namespace std;

int count(int n, int d){
  int c=0;
  for(int i=d; i<=n; i*=d){
    c+=n/i;
  }
  return c;
}

int main(){
  int n, d;
  cin >> n >> d;
  cout << count(n, d);
  return 0;
}


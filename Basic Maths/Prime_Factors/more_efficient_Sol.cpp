#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

void solve(){
  if (n<=1) return;

  while(n%2 == 0){
    cout << 2;
    n/=2;
  }
  while(n%3 == 0){
    cout << 3;
    n/=3;
  }
  for(int i=5; i*i<=n; i+=6){
    while(n%i == 0){
      cout << i;
      n/=i;
    }
    while(n%(i+2) == 0){
      cout << i+2;
      n/=i+2;
    }
  }
  if (n>1)
    cout << n;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int x, n;
void readInput(){
  cin >> x >> n;
}

// move this line to upper
using namespace std;

void solve(){
  int res = 1;
  while(n>0){
    if (n%2 == 0)
      x = x*x;
    else
      res = res * x;
    n/=2;
  }
  cout << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


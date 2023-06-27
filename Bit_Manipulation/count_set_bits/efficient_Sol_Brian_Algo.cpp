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
  int res = 0;
  while(n>0){
    n = n&(n-1);
    res++;
  }
  cout << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


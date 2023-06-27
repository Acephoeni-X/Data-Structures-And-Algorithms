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
  int mul=1;
  for(int i=1; i<=n; i++)
    mul *= i;
  cout << mul;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


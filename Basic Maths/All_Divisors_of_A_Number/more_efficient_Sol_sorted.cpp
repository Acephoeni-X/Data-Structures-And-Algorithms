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
  int i;
  for(i=1; i*i<=n; i++)
    if (n%i == 0)
      cout << i << endl;
  for(; i>=1; i--)
    if (n%i == 0)
      cout << n/i << endl;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


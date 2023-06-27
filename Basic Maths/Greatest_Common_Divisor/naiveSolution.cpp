#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n1, n2;
void readInput(){
  cin >> n1 >> n2;
}

// move this line to upper
using namespace std;

void solve(){
  int n=0;
  if (n1 < n2)
    n = n1;
  else
    n = n2;
  int gcd = 0;
  for(int i=1; i<=n; i++)
    if (n1%i == 0 and n2%i == 0)
      gcd = i;
  cout << gcd;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


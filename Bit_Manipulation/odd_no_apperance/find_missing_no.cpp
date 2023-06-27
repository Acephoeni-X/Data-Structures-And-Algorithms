#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100];
void readInput(){
  cin >> n;
  for(int i=0; i<n-1; i++)
    cin >> a[i];
}

// move this line to upper
using namespace std;

void solve(){
  int res = 0;
  for (int i=0; i<n-1; i++)
    res ^= a[i];
  for (int i=0; i<n+1; i++)
    res = res ^ i;

  cout << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


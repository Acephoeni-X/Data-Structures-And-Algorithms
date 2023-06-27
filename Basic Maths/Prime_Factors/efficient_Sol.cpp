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
  if (n<1) return;
  for(int i=2; i*i<=n; i++){
    while(n%i == 0){
      cout << i << " * ";
      n = n/i;
    }
  }
  if (n>1) cout << n;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


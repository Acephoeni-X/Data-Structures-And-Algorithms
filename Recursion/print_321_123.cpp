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

void recur(int n){
  // base case
  if (n == 0)
    return;
  
  //recur case
  cout << n << endl;
  recur(n-1);
  cout << n << endl;
}

void solve(){
  recur(n);
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


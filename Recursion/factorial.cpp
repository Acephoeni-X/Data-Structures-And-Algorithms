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

int recur(int n, int k){
  // base case
  if (n <= 0)
    return k;

  return recur(n-1, k*n); // this function is tail recursive hence faster
}

void solve(){
  cout << recur(n, 1);
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, x;
void readInput(){
  cin >> x >> n;
}

// move this line to upper
using namespace std;

int recur(int x, int n){
  // base case
  if (n == 0)
    return 1;

  // recur case
  if (n%2 == 0)
    return recur(x, n/2) * recur (x, n/2);

  return recur(x,n-1)*x;
}

void solve(){
  cout << recur(x, n);  
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


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

int recur(int n){
  if (n == 0)
    return 0;

  cout << n << " ";
  return recur(n-1);
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


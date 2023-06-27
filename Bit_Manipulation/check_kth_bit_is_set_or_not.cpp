#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, k;
void readInput(){
  cin >> n >> k;
}

// move this line to upper
using namespace std;

bool using_left_shift(int n, int k){
  if ((n & (1 << (k-1))) != 0)
    return true;
  return false;
}

bool using_right_shift(int n, int k){
  if ((n >> (k-1) & 1) == 1)
    return true;
  return false;
}

void solve(){
  using_left_shift(n, k) ? cout << "set" : cout<<"not set";
  cout << endl;
  using_right_shift(n, k) ? cout << "set" : cout<<"not set";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}



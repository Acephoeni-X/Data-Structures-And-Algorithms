#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
long long n;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

int solve(long long n){
  // base
  if (n == 0)
    return 0;

  return 1 + solve(n/10);
}

using namespace std;

int main(){
  readInput();
  cout << solve();
  return 0;
}


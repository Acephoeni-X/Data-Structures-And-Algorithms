#include <iostream>
#include <fstream>
#include <math.h>

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

void solve(){
  cout << floor(log10(n))+1;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


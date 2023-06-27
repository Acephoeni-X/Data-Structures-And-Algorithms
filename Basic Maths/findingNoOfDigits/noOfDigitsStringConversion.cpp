#include <iostream>
#include <fstream>
#include <string>

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
  string num = to_string(n);
  cout << num.size();
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


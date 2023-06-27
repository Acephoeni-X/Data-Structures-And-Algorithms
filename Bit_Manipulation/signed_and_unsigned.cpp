#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
unsigned int n1;
signed int n2;
void readInput(){
  cin >> n1 >> n2;
}

// move this line to upper
using namespace std;

void solve(){
  cout << ~n1 << endl;
  cout << ~n2;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


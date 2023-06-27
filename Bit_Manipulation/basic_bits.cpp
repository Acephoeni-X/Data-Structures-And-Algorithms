#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int x, y;
void readInput(){
  cin >> x >> y;
}

// move this line to upper
using namespace std;

void solve(){
  cout << x << " & " << y << " = " << (x&y) << endl;
  cout << x << " | " << y << " = " << (x|y) << endl;
  cout << x << " ^ " << y << " = " << (x^y) << endl;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


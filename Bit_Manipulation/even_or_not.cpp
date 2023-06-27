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

void solve(){
  if ((n&1) != 0)
    cout << "odd";
  else
    cout << "even"; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


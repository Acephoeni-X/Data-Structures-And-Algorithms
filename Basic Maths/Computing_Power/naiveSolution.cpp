#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int x, n;
void readInput(){
  cin >> x >> n;
}

// move this line to upper
using namespace std;

void solve(){
  int power = 1;
  while(n--){
    power*=x;
  }
  cout << power;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


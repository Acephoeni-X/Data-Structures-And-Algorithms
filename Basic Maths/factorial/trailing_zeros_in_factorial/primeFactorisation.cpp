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
  int counter=0;
  for (int i=5; i<=n; i=i*5){
      counter = counter + n/i;
  }
  cout << counter;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


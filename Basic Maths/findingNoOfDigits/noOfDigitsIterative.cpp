#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
long long n;
int counter = 0;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

void solve(){
  while (n>0){
    counter++;
    n/=10;
  }
  cout << counter;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


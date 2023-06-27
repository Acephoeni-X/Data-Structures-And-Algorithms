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
  bool isPrime=true;
  for(int i=2; i<n^0.5; i++){
    if (n%i == 0){
      isPrime = false;
      break;
    }
  }
  cout << isPrime;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


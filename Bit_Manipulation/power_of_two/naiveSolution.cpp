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
  while(n!=1){
    //if (n%2 != 0){
    //  cout << "Not a power of 2";
    //  break;
    //}
    //n = n/2;
    if (n&1 > 0){
      cout << "Not a power of 2";
      break;
    }
    n = n>>1;
  }

}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


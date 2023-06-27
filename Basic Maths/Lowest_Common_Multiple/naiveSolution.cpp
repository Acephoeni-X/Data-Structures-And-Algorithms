#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n1, n2;
void readInput(){
  cin >> n1 >> n2;
}

// move this line to upper
using namespace std;

void solve(){
  int n = n1 > n2 ? n1 : n2;
  for(int i=n; i<=n1*n2; i++){
    if (i%n1==0 and i%n2 == 0){
      cout << i;
      break;
    }
  }
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


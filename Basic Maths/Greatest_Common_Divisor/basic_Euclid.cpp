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
  while(n1 != n2){
    if (n1>n2)
      n1 = n1-n2;
    else if(n2>n1)
      n2 = n2-n1;
  }
  cout << n1;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


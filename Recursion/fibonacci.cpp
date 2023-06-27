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

int recur(int n){
  //base case
  if (n<=1)
    return n;

  return recur(n-1) +  recur(n-2);
}

void solve(){
  cout << recur(n);
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


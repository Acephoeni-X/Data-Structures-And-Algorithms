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

int solve(int n1, int n2){
  // base case
  if (n2 == 0)
    return n1;

  // recur case
  return solve(n2, n1%n2);
}

using namespace std;

int main(){
  readInput();
  cout << solve(n1, n2);
  return 0;
}


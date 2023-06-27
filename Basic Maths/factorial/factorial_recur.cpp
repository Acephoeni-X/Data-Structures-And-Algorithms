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

int solve(int n){
  if (n==0)
    return 1;
  
  return n * solve(n-1);
}

using namespace std;

int main(){
  readInput();
  cout << solve(n);
  return 0;
}


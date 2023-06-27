#include <iostream>
#include <fstream>
#include <limits.h>
// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100];
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
}

// move this line to upper
using namespace std;

void solve(){
  int currentSum = 0, maxSum = a[0];
  
  for(int i=0; i<n; i++){
    currentSum += a[i];
    if (currentSum > maxSum)
      maxSum = currentSum;
    if (currentSum < 0)
      currentSum = 0;
  }

  cout << endl << "Total Sum: " << maxSum << endl << currentSum; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

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

bool isSorted(int *a, int n){
  if (n==0 || n==1)
    return true;
  for(int i=0; i<n-1; i++){
    if (a[i]>a[i+1])
      return false;
  }
  return true;
}

void solve(){
 isSorted(a, n) ? cout << "True" : cout << "False"; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


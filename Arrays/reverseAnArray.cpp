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

void solve(){
 for(int i=0; i<n/2; i++){
  int t = a[i];
  a[i] = a[n-i-1];
  a[n-i-1] = t;
 }
 cout << endl << "New Array: ";
 for(int i=0; i<n; i++)
   cout << a[i] << ", ";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


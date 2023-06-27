#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100], pos, value;
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
  cin >> pos >> value;
}

// move this line to upper
using namespace std;

int solve(){
  if (n == 100)
    return n;
  int idx = pos - 1;
  for(int i=n-1; i>=idx; i--){
    a[i+1] = a[i];
  }
  a[idx] = value;
  return n+1;
}

using namespace std;

int main(){
  readInput();
  int size = solve();
  cout << endl << "new array: ";
  for (int i=0; i<size; i++)
    cout << a[i] << " ";
  return 0;
}


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
  int temp = a[0];
  for(int i=0; i<n; i++)
    a[i] = a[i+1];
  a[n-1] = temp;

  cout << endl << "New Array: " << endl;
  for(int i=0; i<n; i++)
    cout << a[i] << " ";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


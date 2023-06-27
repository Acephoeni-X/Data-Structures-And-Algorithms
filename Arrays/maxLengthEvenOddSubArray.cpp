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
  int length= 1;
  for(int i=1; i<n; i++){
    if ((a[i]%2 == 0 && a[i-1]%2 != 0) || (a[i]%2 != 0 && a[i-1]%2 == 0))
      length++;
    else
      length = 1;
  }
  cout << "Max Length: " << length;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


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
  int res=a[1]-a[0],min=a[0], max=a[0];
  for(int i=1; i<n; i++){
    res = res > a[i]-min ? res : a[i]-min;
    if (a[i] < min)
      min = a[i];
  }
  cout << endl << "Max Difference: " << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


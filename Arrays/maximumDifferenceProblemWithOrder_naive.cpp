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
  int maxDiff = a[1] - a[0];
  for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++){
      if (j>i && a[j]-a[i] > maxDiff){
	maxDiff = a[j] - a[i];
      }
    }
  cout << endl << "Max Diff: " << maxDiff;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


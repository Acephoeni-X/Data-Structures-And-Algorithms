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
  int leader;
  leader = a[n-1];
  cout << endl << leader << " ";
  for(int i=n-2; i>=0; i--){
    if (leader < a[i]){
      leader = a[i];
      cout << leader << " ";
    }
  }
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


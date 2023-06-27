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
  int profit=0, track=a[0];
  for(int i=1; i<n; i++){
    if (a[i] < a[i-1]){
      profit += a[i-1] - track;
      track = a[i];
    }
    if (i == n-1){
      profit += a[i] - track;
      track = a[i];
    }
  }
  cout << endl << "Total Profit: " << profit;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


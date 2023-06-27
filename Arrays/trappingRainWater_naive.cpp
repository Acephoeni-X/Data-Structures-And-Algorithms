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
  int left = a[0], right = a[n-1], res=0;
  for(int i=1; i<n-1; i++){
    for(int j=0; j<i; j++)
      if (a[i]>left)
	left = a[i];
    for(int j=i+1; j<n; j++)
      if (a[i]>right)
	right = a[i];
    res += left>right? right : left - a[i];
  }
  cout << "Total Water Stored: " << res; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


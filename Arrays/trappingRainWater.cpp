#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, arr[100];
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
}

// move this line to upper
using namespace std;

int findMax(int a, int b){
  return (a>b? a: b);
}

void solve(){
  int left[n], right[n], res=0;
  left[0] = arr[0];
  for(int i=1; i<n; i++)
    left[i] = findMax(arr[i], left[i-1]);
  
  right[n-1] = arr[n-1];
  for(int i=n-2; i>=0; i--)
      right[i] = findMax(arr[i], right[i+1]);

  for(int i=1; i<n-1; i++)
    if (left[i] < right[i])
      res += left[i] -arr[i];
    else
      res += right[i] -arr[i];
  
  cout << "Total Water: " << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


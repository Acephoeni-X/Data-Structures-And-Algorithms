#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, arr[100]; int s;
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> s;
}

// move this line to upper
using namespace std;

int solve(){
  for(int i=0; i<n; i++)
    if (arr[i] == s)
      return i;
  return -1;
}

using namespace std;

int main(){
  readInput();
  cout << solve();
  return 0;
}


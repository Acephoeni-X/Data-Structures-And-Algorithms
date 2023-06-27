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
  int res=0, temp=0;
  for(int i=0; i<n; i++){
    if (a[i] == 1)
      temp++;
    else{
      res = res<temp? temp: res;
      temp = 0;
    }
  }
  res = res<temp? temp: res;
  cout << "Max ones: " << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


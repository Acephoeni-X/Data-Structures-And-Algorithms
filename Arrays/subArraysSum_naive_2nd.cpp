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
  int temp=0, res=a[0];
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      temp+=a[j];
      res = res>temp? res: temp;
    }
    temp = 0;
  }
  cout << "Max SubArray Sum: " << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


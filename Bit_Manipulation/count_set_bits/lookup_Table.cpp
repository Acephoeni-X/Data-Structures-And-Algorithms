#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, ltu[256];
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

void createLookUpTable(){ // understand how to form lookup table
  for(int i=0; i<256; i++){
    ltu[i] = (i&1) + ltu[i/2];
  }
}
void solve(){
  createLookUpTable(); // need to precompile
  int res=0;
  while(n>0){
    res+=ltu[n&0xff];
    n = n>>8;
  }
  cout << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


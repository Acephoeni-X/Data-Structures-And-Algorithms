#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

void solve(){
  for(int i=1; i*i<=n; i++){
    if (n%i == 0){
      cout << i << endl;
      if (i != n/i)
	cout << n/i << endl;
    }
  }
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


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
  int freq = 1;
  for(int i=0; i<n; i++){
    if (a[i] == a[i+1])
      freq ++;
    else if (a[i] != a[i+1]){
      cout << endl << a[i] << " " << freq;
      freq = 1;
    }
  }
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100], value;
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
  cin >> value;
}

// move this line to upper
using namespace std;

void solve(){
  for(int i=0; i<n; i++){
    if (a[i] == value){
      a[i] = a[i+1];
      value = a[i+1];
    }
  }
  cout << endl << "New Array: ";
  n--;
  for(int i=0; i<n; i++)
    cout << a[i] << " ";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


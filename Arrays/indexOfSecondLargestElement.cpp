#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100], secondLargest, largest;
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
}

// move this line to upper
using namespace std;

void solve(){
  int largest = a[0];
  int secondLargest = 0;
  for(int i=0; i<n; i++){
    if (a[i] > largest){
      secondLargest = largest;
      largest = a[i];
    }
    else if (a[i] < largest){
      if (a[i] > secondLargest)
	secondLargest = a[i];
    }
  }
  cout << endl << secondLargest;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


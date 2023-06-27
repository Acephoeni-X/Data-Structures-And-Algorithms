#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100];
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a[i]; 
  }
}

// move this line to upper
using namespace std;

int indexOfLargest(int *a, int n){
  int largest = a[0];
  for(int i=0; i<n; i++){
    if (largest < a[i])
      largest = a[i];
  }
  return largest;
}

void solve(){
 int largest = indexOfLargest(a, n);
 int secondLargest = -1;
 for(int i=0; i<n; i++){
  if (a[i] > secondLargest && a[i] < largest)
    secondLargest = a[i];
 }
 cout << endl << secondLargest;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


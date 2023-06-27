#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100], d, temp[100];
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
  cin >> d;
}

// move this line to upper
using namespace std;

void swap(int *a, int low, int high){
  while(low<high){
    int temp = a[low];
    a[low] = a[high];
    a[high] = temp;
    low ++;
    high --;
  }
}

void solve(){
 swap(a, 0, d-1);
 swap(a, d, n-1);
 swap(a, 0, n-1);

 cout << endl << "New Array: " ;
 for(int i=0; i<n; i++)
   cout << a[i] << " ";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}

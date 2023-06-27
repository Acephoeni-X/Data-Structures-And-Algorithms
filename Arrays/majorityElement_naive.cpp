#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, a[100], maj=0;
void readInput(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];
  maj = n/2;
}

// move this line to upper
using namespace std;

void solve(){
  for(int i=0; i<n; i++){
    int majIndex=1;
    for(int j=i+1; j<n; j++){
      if (a[i] == a[j]){
	majIndex++;
      }
    }
      if (majIndex > maj)
	 cout << i  << endl;
  }
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


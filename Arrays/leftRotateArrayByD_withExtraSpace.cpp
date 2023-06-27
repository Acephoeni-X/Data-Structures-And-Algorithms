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

void solve(){
  int res=1;
  for(int i=0; i<n; i++){
    if (i<d){
      temp[i] = a[i];
    }
    else{
      a[res-1] = a[i];
      res++;
    }
  }
  
  for(int i=0; i<d; i++){
    a[n-d+i] = temp[i];
  }

  cout << endl << "New Array: " << endl;
  for(int i=0; i<n; i++)
    cout << a[i] << " ";
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


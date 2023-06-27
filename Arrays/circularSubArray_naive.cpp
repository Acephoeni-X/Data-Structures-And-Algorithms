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
  int res = a[0];
  for(int i=0; i<n; i++){
    int cur_sum = a[i], cur_max = a[i];
    for(int j=1; j<n; j++){
      int index = (i+j)%n;
      cur_sum += a[index];
      cur_max = cur_max>cur_sum? cur_max: cur_sum;
    }
    res = res>cur_max ? res : cur_max;
  }
  cout << "Sum: " << res;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


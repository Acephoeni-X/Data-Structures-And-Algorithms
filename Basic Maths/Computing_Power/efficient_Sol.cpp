#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n, x;
void readInput(){
  cin >> x >> n;
}

// move this line to upper
using namespace std;

void solve(){
  int power = 1;
  //if (n%2 == 0)
  //  for(int i=1; i<=n/2; i++)
  //    power *= x;
  //else
  //  for(int i=1; i<=n; i++)
  //    power *= x;
  //
  //if (n%2 == 0)
  //  cout << power*power;
  //else
  //  cout << power;

  while(n>=0){
    if (n%2 == 0){
      power = power * power;
      n /= 2;
    }
    else{
      power = power * x;
      n--;
    }
  }
  cout << power;
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


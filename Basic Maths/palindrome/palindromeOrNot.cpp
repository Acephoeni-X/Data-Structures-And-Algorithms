#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n;
bool check=true;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

void solve(){
  int rev=0, tempn=n;
  while(tempn>0){
    rev = rev*10 + tempn%10;
    tempn/=10;
  }
  if (rev == n)
    cout << "The no is Palindrome";
  else cout << "The no is not Palindrome"; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


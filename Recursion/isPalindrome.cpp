#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
std::string s;
void readInput(){
  cin >> s;
}

// move this line to upper
using namespace std;

bool recur(string &s, int start, int end){
  if (start>=end)
    return true;

   return (s[start] == s[end]) && recur(s, ++start, --end);
}

void solve(){
  cout << recur(s, 0, s.length()-1);
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


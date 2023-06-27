#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int arr[100] = {10, 20, 30};
void readInput(){
}

// move this line to upper
using namespace std;

void solve(){
  cout << endl << "Address of array is: " << arr; 
  cout << endl << "Value at this address: " << *arr; 
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable

void fixedSizeArray(){
 int n=10; 			// stack allocated array
 int ar[100];			// stack allocated array
 int arr[n];			// same
 int *arrr = new int[n];	// Heap allocated array
 int *arrrr[] = {10,20,30}; 	// stack allocated array
}

void dynamicSizeArray(){	// In c++ vector is eg of dynamic size array
  vector<int> v;
}

void readInput(){
}

// move this line to upper
using namespace std;

void solve(){
  
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <fstream>

// remove these lines before submitting
using std::endl;
std::ifstream cin("/Users/rishi/Files/C++/input.txt");

// declare variable
int n;
void readInput(){
  cin >> n;
}

// move this line to upper
using namespace std;

bool isPrime(int n){
  if (n==1) return false;
  if (n==2 or n==3) return true;
  if (n%2==0 or n%3==3) return false;
  else
    for(int i=5; i*i<=n; i+=6){
      if (n%i == 0 or n%(i+2)==0)
	return false;
    }
  return true;
}

using namespace std;

int main(){
  readInput();
  isPrime(n)?cout<<"True" : cout << "False";
  return 0;
}


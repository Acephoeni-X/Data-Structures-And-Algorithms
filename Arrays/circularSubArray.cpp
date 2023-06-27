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

int kadane(int *a, int n){
  int temp=0 , max=a[0];
  for(int i=0; i<n; i++){
    temp += a[i];
    if (temp>max) max = temp;
    if (temp<0) temp = 0;
  }
  return max;
}

int findMinKadane(int *a, int n){
  int sum=0, min=a[0];
  for(int i=0; i<n; i++){
    if (sum>0) sum = a[i];
    else sum+=a[i];
    if (min>sum) min = sum;
  }
  return min;
}

int findMaxSum(int *a, int n){
   int maxSimpleSum = kadane(a, n);
   if (maxSimpleSum < 0)
     return maxSimpleSum;
  
   int sum = 0;
   for(int i=0; i<n; i++){
     sum += a[i];
   }
   //return findMinKadane(a, n);
   int maxCirSum = sum - findMinKadane(a, n);
   return maxCirSum>maxSimpleSum? maxCirSum : maxSimpleSum;
}

void solve(){
  cout << findMaxSum(a, n);
}

using namespace std;

int main(){
  readInput();
  solve();
  return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

int sqrt(int n){
  int start =1, end=n, ans=-1;
  int mid = (start+end)/2;
  while(start<=end){
    mid = floor((start+end)/2);
    if(mid*mid == n)
      return mid;
    else if(n < mid*mid)
      end = mid-1;
    else{
      start = mid+1;
      ans = mid;
    }
  }
  return ans;
}

int main(){
  int n;
  cin >> n;
  cout << sqrt(n);
  return 0;
}


#include <iostream>

using namespace std;

int binary(int n, int *arr, int x){
  int start = 0, last = n-1;
  int mid = (start+last)/2;
  while(start<=last){
    if(arr[mid] == x)
      return mid;
    if(x < arr[mid]){
      last = mid-1;
    }
    if(x > arr[mid]){
      start = mid+1;
    }
    mid = (start+last)/2;
  }
  return -1;
}

int main(){
  int n, arr[100], x;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> x;
  cout << binary(n, arr, x);
  return 0;
}


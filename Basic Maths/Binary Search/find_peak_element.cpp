#include <iostream>

using namespace std;

int findPeak(int *arr, int start, int end){
  if(start>end) return -1;
  int mid = (start+end)/2;
  if(arr[mid] > arr[mid+1] and arr[mid] >  arr[mid-1])
    return mid;
  else if(arr[start] < arr[mid-1])
    return findPeak(arr, start, mid-1);
  return findPeak(arr, mid+1, end);
}

int main(){
  int n, arr[100];
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cout << findPeak(arr, 0, n-1);
  return 0;
}


#include <iostream>

using namespace std;

int binary_search(int *arr, int x, int start, int end){
  if(start>end) return -1;
  int mid = (start+end)/2;
  if( arr[mid] == x)
    return mid;
  else if(arr[start]<arr[end] and x=>arr[start] and x<=arr[end])
    return binary_search(arr, x, start, mid-1);
  return binary_search(arr, x, mid+1, end);
}

int main(){
  int n, arr[100], x;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> x;
  cout << binary_search(arr, x, 0, n-1);
  return 0;
}


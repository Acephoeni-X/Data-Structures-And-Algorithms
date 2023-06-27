#include <iostream>

using namespace std;

int firstOcc(int *arr, int x, int start, int end){
  if(start>end)
    return -1;
  int mid = (start + end)/2;
  if (x > arr[mid])
    return firstOcc(arr, x, mid+1, end);
  else if(x < arr[mid])
    return firstOcc(arr, x, start, mid-1);
  else
    if(arr[mid] == x && arr[mid-1] == x){
	return firstOcc(arr, x, start, mid-1);
    }
  return mid;
}

int lastOcc(int *arr, int x, int start, int end){
  if(start>end) return -1;
  int mid = (start+end)/2;
  if(x > arr[mid])
    return lastOcc(arr, x, mid+1, end);
  else if(x<arr[mid])
    return lastOcc(arr, x, start, mid-1);
  else if (x == arr[mid] && x == arr[mid+1])
    return lastOcc(arr, x, mid+1, end);
  return mid;
}

int countOcc(int *arr, int n, int x){
  int first = firstOcc(arr, x, 0, n-1);
  if(first == 0)
    return -1;
  return (lastOcc(arr, x, 0, n-1) - first +1);
}

int main(){
  int n, arr[100], x;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> x;
  cout << countOcc(arr, n, x);
  return 0;
}


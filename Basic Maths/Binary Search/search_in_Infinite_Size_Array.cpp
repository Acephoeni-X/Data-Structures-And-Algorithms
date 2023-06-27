#include <iostream>

using namespace std;

int binary_search(int *arr, int start, int end, int x){
  if(start>end)
    return -1;
  int mid = (start+end)/2;
  if (arr[mid] == x)
    return mid;
  else if(x > arr[mid])
    return binary_search(arr, mid+1, end, x);
  else
    return binary_search(arr, start, mid-1, x);
}

int search(int *arr, int n, int x){
  if (arr[0] == x)
    return 0;
  int i=1, ans=1;
  while(true){
    if(arr[i] == x)
      return i;
    else if(x<arr[i])
      return binary_search(arr, ans, i, x);
    ans = i;
    i = i*2;
  }
  return -1;
}

int main(){
  int n, arr[100], x;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> x;
  cout << search(arr, n, x);
  return 0;
}


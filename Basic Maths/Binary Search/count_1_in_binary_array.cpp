#include <iostream>

using namespace std;

int count1(int *arr, int n, int start, int end){
  if(start>end)
    return -1;
  int mid = (start+end)/2;
  if(arr[mid] == 1 and arr[mid-1] == 1)
    return count1(arr, n, start, mid-1);
  else if(arr[mid] == 0)
    return count1(arr, n, mid+1, end);
  else
    return n-mid;
}

int main(){
  int n, arr[100];
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cout << count1(arr, n, 0, n-1);
  return 0;
}


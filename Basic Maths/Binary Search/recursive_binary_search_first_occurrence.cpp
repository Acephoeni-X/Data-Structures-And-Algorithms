#include <iostream>

using namespace std;

int recur(int *arr, int x, int start, int end){
  if (start > end) return -1;
  int mid = (start+end)/2;
  if(arr[mid] == x){
    if(arr[mid-1] == x){
      return recur(arr, x, start, mid-1);
    }
    else
      return mid;
  }
  else if (x > arr[mid])
    return recur(arr, x, mid+1, end);
  else 
    return recur(arr, x, start, mid-1);
}

int main(){
  int n, arr[100], x;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  cin >> x;
  cout << recur(arr, x, 0, n-1);
  return 0;
}


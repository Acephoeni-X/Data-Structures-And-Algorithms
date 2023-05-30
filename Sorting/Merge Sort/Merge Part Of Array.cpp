#include<iostream>

using std::cout;
using std::endl;

void merge(int *arr, int n, int low, int mid, int high){
	int i=low, j=mid+1;
	int arr3[n], index=0;
	while(i<=mid and j<=high){
		if(arr[i] > arr[j])
			arr3[index++] = arr[j++];
		else
			arr3[index++] = arr[i++];
	}
	while(i<=mid)
		arr3[index++] = arr[i++];
	while(j<=high)
		arr3[index++] = arr[j++];
	for(int x: arr3)
		cout << x << ",";
}

int main(){
	int arr[] = {5, 8, 12, 14, 7};
	int n = sizeof(arr)/sizeof(int);
	int low=0, mid=3, high=4 ;
	merge(arr, n, low, mid, high);
	return 0;
}

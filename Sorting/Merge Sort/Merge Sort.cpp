#include<iostream>

using std::cout;
using std::endl;

void mergeSort(int *arr, int low, int mid, int high){
	int i=0, j=mid+1;
	int temp[high-low+1]; int idx=0;
	while(i<=mid and j<=high){
		if(arr[i]>arr[j])
			temp[idx++] = arr[j++];
		else
			temp[idx++] = arr[i++];
	}
	while(i<=mid)
		temp[idx++] = arr[i++];
	while(j<=high)
		temp[idx++] = arr[j++];

	for(int i=0; i<idx; i++)
		arr[i] = temp[i];
}

void printArray(int *arr, int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << ",";
}

void merge(int *arr, int low, int high){
	if(low<high){
		int mid = low + (high-low)/2;
		merge(arr, low, mid);
		merge(arr, mid+1, high);
		mergeSort(arr, low, mid, high);
	}
}

int main(){
	int arr[] = {10, 5, 30, 15, 7};
	int n = sizeof(arr)/sizeof(int);
	int low = 0, high = n;
	merge(arr, low, high-1);
	printArray(arr, n);
	return 0;
}

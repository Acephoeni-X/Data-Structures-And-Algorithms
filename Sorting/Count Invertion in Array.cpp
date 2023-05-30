#include<iostream>

using std::cout;
using std::endl;

int mergeFunction(int *arr, int low, int mid, int high){
	int i = low, j= mid+1;
	int temp[high-low+1]; int idx=0, res=0;
	while(i<=mid and j<=high){
		if(arr[i] > arr[j])
			temp[idx++] = arr[j++];
		else
			[idx++] = arr[i++];
	}
	while(i<=mid)
		temp[idx++] = arr[i++];
	while(j<=high)
		temp[idx++] = arr[j++];
	for(int i=0; i<idx; i++)
		arr[low+i] = temp[i];
	return res;
}

int merge(int *arr, int low, int high){
	int res=0;
	if(low<high){
		int mid = (high+low)/2;
		res+=merge(arr, low, mid);
		res+=merge(arr, mid+1, high);
		res+=mergeFunction(arr, low, mid, high);
	}
	return res;
}

int main(){
	int arr[] = {4, 1, 3, 2, 5};
	int n = sizeof(arr)/sizeof(int);
	int low=0, high=n-1;
	int count =0;
	cout << merge(arr, low, high) << endl;
	for(int i: arr)
		cout << i << ",";
	return 0;
}

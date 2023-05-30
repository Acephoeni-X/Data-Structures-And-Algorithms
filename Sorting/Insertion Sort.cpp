#include<iostream>

using namespace std;

// a function to add element to certain position in array and move bigger 
// element to the right

int *move(int *arr1, int n, int value){
	int i=n-1;
	while(i>=0 and arr1[i]>value){
		cout << "Insert";
		arr1[i+1] = arr1[i];
		i--;
	}
	arr1[i+1] = value;
	n++;
	for(int i=0; i<n; i++)
		cout << arr1[i] << ",";
	return arr1;
}

void insertionSort(int *arr, int n){
	for(int i=1; i<n; i++){
		int element = arr[i];
		int j = i-1;
		while(j>=0 and arr[j] > element){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = element;
	}
	for(int i=0; i<n; i++)
		cout << arr[i] << ",";
}

int main(){
	int arr[] = {20,5,40,60,10,30, 100, 70, 90};
	int size = sizeof(arr)/sizeof(int);
	insertionSort(arr, size);
	//move();
	return 0;
}

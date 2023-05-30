#include<iostream>

using namespace std;

void swap(int &a, int &b){
	a = a+b;
	b = a-b;
	a = a-b;
}

void selectionSort(int *arr, int n){
	for(int i=0; i<n; i++){
		int min = arr[i];
		for(int j=i+1; j<n; j++){
			if(min > arr[j])
				min = arr[j];
		}
		swap(min, arr[i]);
		for(int x=0; x<n; x++)
			cout << arr[x] << ",";
		cout << endl;
	}
	
}

int main(){
	int arr[] = {10, 5, 8, 20, 2, 18};
	selectionSort(arr, 6);
	return 0;
}

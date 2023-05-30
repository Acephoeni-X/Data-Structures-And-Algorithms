#include<iostream>

using std::cout;
using std::endl;

void optimized(int *arr1, int *arr2, int n1, int n2){
	int i=0, j=0;
	while(i<n1 and j<n2){
		if(i>0 and arr1[i] != arr1[i-1]){
			i++;
			continue;
		}
			if(arr1[i] < arr2[j])
				i++;
			else if(arr1[i] == arr2[j]){
				cout << arr1[i] << ",";
				i++;
				j++;
			}
			else
				j++;
	}
}

int main(){
	int arr1[] = {2, 20, 20, 40, 60};
	int arr2[] = {10, 20, 20, 20};
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);
	optimized(arr1, arr2, n1, n2);
	return 0;
}

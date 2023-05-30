#include<iostream>

using std::cout;
using std::endl;

void unions(int *arr1, int *arr2, int n1, int n2){
	int i=0; int j=0;
	while(i<n1 and j<n2){
		if(i>0 and arr1[i] == arr1[i-1]){
			i++; continue;
		}
		if(j>0 and arr2[j] == arr2[j-1]){
			j++; continue;
		}
		if(arr1[i] > arr2[j]){
			cout << arr2[j] << ",";
			j++;
		}
		else if(arr1[i] == arr2[j]){
			cout << arr1[i] << ",";
			i++; j++;
		}
		else if(arr1[i] < arr2[j]){
			cout << arr1[i] << ",";
			i++;
		}
	}
	while(i<n1)
		(arr1[i]==arr1[i-1] and i>0)? (i=i+1):(cout << arr1[i++] << ",", i);
	while(j<n2)
		(arr2[j]==arr2[j-1] and j>0)? (j=j+1):(cout << arr2[j++] << ",", j);
}

int main(){
	int arr1[] = {2, 3, 3, 3, 4, 4};
	int arr2[] = {4, 4};
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);
	unions(arr1, arr2, n1, n2);
	return 0;
}

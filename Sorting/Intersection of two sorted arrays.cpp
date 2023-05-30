#include<iostream>

using std::cout;
using std::endl;

void intersection(int *arr1, int *arr2, int n1, int n2){
	for(int i=0; i<n1; i++){
		if (i>0 and arr1[i] == arr1[i-1])
			continue;
		for(int j=0; j<n2; j++){
			if(arr1[i] == arr2[j]){
				cout << arr1[i] << ",";
				break;
			}
		}
	}
}

int main(){
	int arr1[] = {1,1,3,3,3};
	int arr2[] = {1, 1, 1, 1, 3, 5};
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);

	intersection(arr1, arr2, n1, n2);

	return 0;
}

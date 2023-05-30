#include<iostream>

using std::cout;
using std::endl;

void naive(int *arr1, int *arr2, int n1, int n2){
	int i =0, j=0;
	int arr3[n1+n2], idx=0;
	while(i<n1 and j<n2){
		if(arr1[i] > arr2[j])
			arr3[idx++] = arr2[j++];
		else
			arr3[idx++] = arr1[i++];
	}
	if(i<n1)
		while(i<n1)
			arr3[idx++] = arr1[i++];
	else
		while(j<n2)
			arr3[idx++] = arr2[j++];

	for(int x: arr3)
		cout << x << ",";
}

int main(){
	int arr1[] = {10, 15, 20};
	int arr2[] = {5, 6, 6, 15};
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);
	naive(arr1, arr2, n1, n2);
	return 0;
}



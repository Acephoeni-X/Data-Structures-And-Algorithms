#include<iostream>

using std::cout;
using std::endl;

int main(){
	int arr[] = {10, 20, 40 ,50, 30};
	int size = sizeof(arr)/sizeof(int);
	for(int j=0; j<size-1; j++){
		bool swapped=false;
		for(int i=0; i<size-j-1; i++)
			if(arr[i] > arr[i+1]){
				arr[i] = arr[i] + arr[i+1];
				arr[i+1] = arr[i] - arr[i+1];
				arr[i] = arr[i] - arr[i+1];
				swapped = true;
			}
		if(!swapped)
			break;
	}
	for(int x: arr)
		cout << x << ",";
	return 0;
}

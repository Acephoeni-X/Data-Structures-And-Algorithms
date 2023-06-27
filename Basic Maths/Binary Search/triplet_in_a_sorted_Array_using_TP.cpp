#include<iostream>

using namespace std;

bool triplet(int n, int *a, int x){
	for(int i=0; i<n; i++){
		int j=i+1, k=n-1;
		while(j<k){
			if(a[i] + a[j] + a[k] == x){
				cout << a[i] << " " << a[j] << " " << a[k] << endl;
				return true;
			}else if (a[i] + a[j] + a[k] > x)
				k--;
			else
				j++;
		}
	}
	return false;
}


int main(){
	int n, arr[100], x;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	cin >> x;
	cout << triplet(n, arr, x);
	return 0;
}

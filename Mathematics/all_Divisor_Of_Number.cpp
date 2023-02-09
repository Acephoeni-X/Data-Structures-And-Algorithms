#include<iostream>
using namespace std;

// This is the optimize method which print in sorted order. TC: O(n)
void optimize(int n){
	int i;
	for(i=1; i*i<n; i++){
		if(n%i == 0)
			cout << i << ", ";
	}
	for(; i>=1; --i){
		if(n%i == 0)
			cout << n/i << ", ";
	}
}

// This is the native solution. TC: O(n)
void naive(int n){
	for(int i=1; i<=n; i++){
		if(n%i == 0)
			cout << i << ", ";
	}
}

int main(){
	int n;
	cin >> n;
	cout << "Using native method: "; naive(n); cout << endl;
	cout << "Using optimize method: "; optimize(n);
	return 0;
}

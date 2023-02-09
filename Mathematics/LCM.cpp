#include<iostream>
using namespace std;

// TC: O(logn)
int gcd(int a, int b){
	if(a>b){
		a = a+b;
		b = a-b;
		a = a-b;
	}
	while(a!=0){
		int temp = b;
		b = a;
		a = temp%a;
	}
	return b;
}

// This is the optimize method which uses the formula: LCM * GCD = a*b; TC: O(logn)
int optimize(int a, int b){
	return (a*b)/gcd(a, b);
}

// This is the naive method. TC: O(n)
int naive(int a, int b){
	int n = a>b ? a: b;
	for(int i=n; i<=a*b; i++){
		if(i%a == 0 and i%b == 0)
			return i;
	}
	return a*b;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << "LCM using Naive Method: " << naive(a, b) << endl;
	cout << "LCM using Optimize Method: " << optimize(a, b) << endl;
	return 0;
}

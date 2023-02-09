#include<iostream>
#include<math.h>
using namespace std;

// Using fermat theorem.
// This theorem is only usefull for digit upto 2^64, if unsigned long long int is used
// TC: O(1)
int fermat(int n){
	if(n <=1) return false;
	if(n ==2) return true;
	
	unsigned long long int div = (1<<(n-1));
	int p = (int)(div%n);	
	return (p==1);
}

// This is the optimize method. 
// This method reduces the loop complexity by already checking if the number is divisible by 2 and 3
// If it is divisible that means no is not prime.
// otherwise it increment by 6 and check.
// TC: O(sqrt(n))
bool optimize(int n){
	if(n == 1) return false;
	if(n == 2 or n == 3) return true;
	if(n%2 == 0 or n%3 == 0) return false;		
	for(int i=5; i*i<=n; i+=6){
		if(n%i == 0 or n%(i+2) == 0)
			return false;
	}
	return true;
}

// This is the naive. TC: O(n)
bool naive(int n){
	for(int i=2; i<n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	cout << "Is Prime using naive method: " << naive(n) << endl;
	cout << "Is Prime using optimize method: " << optimize(n) << endl;
	cout << "Is Prime using fermat's method: " << fermat(n) << endl;
	return 0;
}

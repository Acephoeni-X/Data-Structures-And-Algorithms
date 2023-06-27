#include<iostream>
using namespace std;

int fact(int n){
	int f=0;
	for(int i=5; i<=n; i*=5){
		f += n/i;
	}
	return f;
}

// This naive method will cause buffer overflow for number will large factorial.
int naive(int n){
	int fact=1;
	for(int i=2; i<=n; i++){
		fact*=i;
	}
	int count=0;
	while(fact>0){
		if(fact%10 == 0) ++count;
		if(fact%10 > 0) return count;
		fact /=10;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	cout << "Using naive method: " << naive(n) << endl;
	cout << "Using optimize method: " << fact(n) << endl;
	cout << "Optimize method provides correct answer because above will cause 'int' overflow !!!";
	return 0;
}

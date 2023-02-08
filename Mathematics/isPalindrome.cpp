#include<iostream>
using namespace std;

bool isPalindrome(int n){
	int temp = n;
	int store = 0;
	while(temp>0){
		store = store*10 + temp%10;
		temp /= 10;
	}
	return (store == n);
}

int main(){
	int n;
	cin >> n;
	cout << isPalindrome(n);
	return 0;
}

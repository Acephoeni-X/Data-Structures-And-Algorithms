#include<iostream>

using namespace std;

int count_Digit(int n, int digit){
	while(n>0){
		digit++;
		n/=10;
	}
	return digit;
}

int main(){
	int digit=0, n;
	cin >> n;
	
	cout << count_Digit(n, digit);
	return 0;
}

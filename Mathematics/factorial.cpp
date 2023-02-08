/*
Example 1:
Input:
	N = 5
Output:
	120
Explanation:
	5*4*3*2*1 = 120
	
Example 2:
Input:
	N = 4
Output:
	24
Explanation:
	4*3*2*1 = 24	
 */


#include<iostream>
using namespace std;

// This recursion causes overhead calls, so it is better to use loop method
int recur(int n){
	if(n == 0)
		return 1;
	return recur(n-1) * n;
}

// This method is optimal and efficient
int fact(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f *= i;
	}
	return f;
}

int main(){
	int n;
	cin >> n;
	cout << "Using Recursion: " << recur(n) << endl;
	cout << "Using loop: " << fact(n);
	return 0;
}

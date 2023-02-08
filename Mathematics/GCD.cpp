#include<iostream>
using namespace std;

// This method uses repeated Division with Recursion. TC: O(logn)
// Also known as Euclidian Algorithm
int rep_Div_Recur(int a, int b){
	if(b == 0)
		return a;

	return rep_Div_Recur(b, a%b);
}

// This method is repeated Division without recursion. TC: O(logn)
// This method is best because there is no function overhead call and SC: O(1)
int rep_Division(int a, int b){
	if(a > b){
		a = a - b;
		b = a + b;
		a = b - a;
	}
	while(a != 0){
		int temp = b;
		b = a;
		a = temp%a;
	}
	return b;
}

// This method uses the repeated subtraction. TC: O(n)
int rep_Subtraction(int a, int b){
	while(a != b){
		if(a > b){
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	return a;
}

// Worst Time Complexity of this is O(n).
int naive(int a, int b){
	int n = a > b ? b : a;
	for(int i=n; i>1; i--){
		if(a%i == 0 and b%i == 0)
			return i;
	}
	return 1;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << "Using Naive Method: " << naive(a, b) << endl;
	cout << "Using Repeated Subtraction: " << rep_Subtraction(a, b) << endl;
	cout << "Using Repeated Division without Recursion: " << rep_Division(a, b) << endl;
	cout << "Using Repeated Division with Recursion: " << rep_Div_Recur(a, b) << endl;
	return 0;
}

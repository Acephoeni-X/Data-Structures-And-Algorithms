#include<iostream>
using namespace std;

void sub_optimize(int n){
	if(n==1) cout << 1;
	if(n%2 == 0){
		while(n%2 ==0){
			cout << 2 << ", ";
			n /=2;
		}
	}
	if(n%3 == 0){
		while(n%3 ==0){
			cout << 3 << ", ";
			n/=3;
		}
	}
	for(int i=5; i*i<=n; i+=6){
		if(n%i == 0){
			while(n%i == 0){
				cout << i << ", ";
				n/=i;
			}
		}
		if(n%(i+2) == 0){
			while(n%(i+2) ==0){
				cout << i+2 << ", ";
				n/=(i+2);
			}
		}
	}
	if(n>3)
		cout << n;
}

// This is the naive method and TC: O(nlogn)
void naive(int n){
	for(int i=2; i<=n; i++){
		while(n%i == 0){
			cout << i << ", ";
			n = n/i;
		}
	}
}

int main(){
	int n;
	cin >> n;
	cout << "Prime Factor using Naive: "; naive(n); cout << endl;
	cout << "Prime Factor using suboptimize: "; sub_optimize(n); cout << endl;
	return 0;
}

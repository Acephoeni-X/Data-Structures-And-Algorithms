#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n){
	if(n == 1) return false;
	if(n == 2 or n == 3) return true;
	int p = (int)((1<<(n-1))%n);
	if(p==1) return true;
	return false;
}

// This method is the optimize method and uses sieve of eratosthenes
// It creates a vector with every element as true
// we travel through and mark every element if it is not prime false
// In the end we print the index of element whose value is true
// TC: O(n^1/2 n)
void sieve(int n){
	vector<bool> v(n+1, true);
	for(int i=2; i*i<=n; i++){
		if(v[i]){
			for(int j=i*i; j<=n; j=j+i){
				v[j] = false;
			}
		}
	}

	for(int i=2; i<=n; i++){
		if(v[i])
			cout << i << ", ";
	}
}

// This is the naive method, it checks elements one by one. TC: O(n) or O(n^1/2 *n)
void naive(int n){
	for(int i=1; i<=n; i++)
		if(isPrime(i))
			cout << i << ", ";
}

int main(){
	int n;
	cin >> n;
	cout << "Prime till n using naive: "; naive(n); cout << endl;
	cout << "Prime till n using sieve: "; sieve(n); cout << endl;
	return 0;
}

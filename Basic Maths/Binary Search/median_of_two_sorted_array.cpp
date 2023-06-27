#include <iostream>

using namespace std;

float median(int n1, int n2, int *a1, int *a2){
	int a3[100], n3 = n1+n2;
	int j=0, k=0, i=0;
	while(j<n1 and k<n2){
		if(a1[j]>a2[k]){
			a3[i] = a2[k];
			k++; i++;
		}else{
			a3[i] = a1[j];
			i++; j++;
		}
	}
	while(j<n1)
		a3[i++] = a1[j++];
	while(k<n2)
		a3[i++] = a2[k++];
	if(n3%2 != 0)
		return float(a3[n3/2]);
	return float((a3[n3/2] + a3[n3/2 -1])/2);
}

int main(){
	int n1, n2, arr1[100], arr2[100];
	cin >> n1;
	for(int i=0; i<n1; i++){
		cin >> arr1[i];
	}
	cin >> n2;
	for(int i=0; i<n2; i++)
		cin >> arr2[i];

	cout << float(median(n1, n2, arr1, arr2));
	return 0;
}

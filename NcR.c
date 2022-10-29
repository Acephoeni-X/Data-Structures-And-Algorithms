#include <stdio.h>
#include <stdlib.h>

int NcR(int n,int r) {
    if(r>n-r) r=n-r;
    int product=1,prod=1;
    for(int i=n;i>n-r;i--) {
        product *= i;
    }
    for(int i=1;i<=r;i++) {
        prod *= i;
    }
    return product/prod;
}

int factorial(int n) {
    int ans=1;
    for(int i=2;i<=n;i++) {
        ans *= i;
    }
    return ans;
}



int main() {
    printf("Enter the number of sutdents: ");
    int n;
    scanf("%d", &n);
    int NumberOfWays=0;
    int k=n;
    k--;
    while(k>1) {
        int a = NcR(n,k-1);
        int b = factorial(k);
        //  printf("%d %d ", NcR(n,k-1) ,factorial(k));
        NumberOfWays += (a*b);
        //  printf("%d ", NumberOfWays);
        k--;
    }
    NumberOfWays++;
    NumberOfWays += factorial(n);
    printf("total number of ways = %d ", NumberOfWays);

    

}

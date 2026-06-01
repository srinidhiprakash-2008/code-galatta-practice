// C Program to find sum of digits
#include <stdio.h>

int sumOfDigits(int n) {
     int sum =0,dig =1;
     while(n>0)
     {
        dig=n%10;
        sum=sum+dig;
        n=n/10;
     }
     return sum;
}



// --------------------------------------------------------------
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
    return 0;
}

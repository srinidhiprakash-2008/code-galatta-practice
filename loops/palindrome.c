#include <stdio.h>
#include <stdbool.h>

bool isPalindromeNumber(int n) {
     if(n<0) 
     return false;
     int orig =n, rev=0;
     while(n>0)
     {
        rev=(rev*10)+(n%10);
        n/=10;
     }
     return orig==rev;
}



// --------------------------------------------------------------
int main() {
    int n;
    scanf("%d", &n);

    if (isPalindromeNumber(n))
        printf("True");
    else
        printf("False");

    return 0;
}
// C Program to find nth value in Fibonacci Series
#include <stdio.h>

int fibonacci(int n) {
    int next,a=0,b=1,i;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    for(i=2;i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    return b;
}



// --------------------------------------------------------------
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%d", fibonacci(n));
    return 0;
}
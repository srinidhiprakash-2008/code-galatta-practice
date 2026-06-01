#include <stdio.h>

int reverseNumber(int n) {
    int revnum=0;
    while(n>0)
    {
        revnum=(revnum*10)+(n%10);
        n=n/10;
    }
    return revnum;
}



// --------------------------------------------------------------
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", reverseNumber(n));
    return 0;
}
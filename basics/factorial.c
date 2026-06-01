// C Program to find factorial of a number
#include <stdio.h>

int factorial(int n) {
     int i, sum =1;
     for (i=1;i<=n;i++)
     {
        sum = sum * i;
     }
      return sum;
}



// --------------------------------------------------------------
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

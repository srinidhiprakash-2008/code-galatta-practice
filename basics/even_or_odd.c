// C Program to check if a number is even or odd
#include <stdio.h>

const char* checkEvenOrOdd(int N) {
    if (N%2==0)
    {
        return "Even";
    }
    else 
    {
        return "Odd";
    }
}



// --------------------------------------------------------------
int main() {
    int N;
    scanf("%d", &N);

    printf("%s", checkEvenOrOdd(N));
    return 0;
}

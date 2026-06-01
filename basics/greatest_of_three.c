// Program to determine the greatest of the 3 numbers given
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter the numbers:\n");
    scanf("%d%d%d",&n1, &n2, &n3);
    
    if(n1==n2 && n2==n3)
        printf("All 3 given numbers are equal");
    
    if (n1>n2)
        if (n1>n3)
            printf("Number %d is the Greatest\n" ,n1);
            
    if (n2>n1)
        if (n2>n3)
            printf("Number %d is the Greatest\n" ,n2);
            
    if (n3>n1)
        if (n3>n2)
            printf("Number %d is the Greatest\n" ,n3);
            
    return 0;
}

// Write an expression that checks if a number is a multiple of either 3 or 5.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int result;
    result = x % 3==0 || x % 5==0 ;
        printf(" The result is %d\n ", result);

    
return 0;
}
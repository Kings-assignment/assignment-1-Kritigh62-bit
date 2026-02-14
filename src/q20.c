// Write an expression that checks if a number is a multiple of either 3 or 5.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x % 3==0 || x % 5==0){
        printf("The number is either multiple of 3 or 5.\n ");

    } else {
        printf("The number is not multiple of 3 or 5.\n");
    }
return 0;
}
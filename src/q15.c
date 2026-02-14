// Write an expression that checks if a number is both positive and even.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if ( num > 0 && num % 2 == 0){
    printf("%d is positive and even.\n"); }
    else {
        printf("%d is not positive and  even.\n");
    }
    return 0;
}
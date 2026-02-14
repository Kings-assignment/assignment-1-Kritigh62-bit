// Write an expression that checks if a number is both positive and even.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    int result; 
    result =  num > 0 && num % 2 == 0 ;
    printf("The result is %d\n", result); 

    
    return 0;
}
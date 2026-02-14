#include<stdio.h>
int main()
{
    int num, result;
    printf("Enter a number:");
    scanf("%d", &num);

    result = !(num & (num - 1));
    printf("The result is : %d\n", result);
    return 0;
}
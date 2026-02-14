// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    int result;
    result = a > b && c != 0;

    printf("Condition is %d", result);
    // if (a > b && c != 0) {
    //     printf("%d is greater than %d", a, b);
    // } else {
    //     printf("%d is not equal to 0", c);
    // }

    return 0;
}
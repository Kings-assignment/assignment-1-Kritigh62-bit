// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, sum;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    sum = (a + b);
    int result;
    result = sqrt(sum);
    printf("The square root of the sum of two numbers is %d\n", result);
    return 0;
}
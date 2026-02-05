/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include<stdio.h>
int main()
{
    float Celsius, farenheit;
    printf("Enter temperature in Celsius:", Celsius);
    scanf("%f", &Celsius);

    farenheit = (Celsius * 9 / 5) + 32;

    printf("Temperature in Farenheit is %.2f\n",farenheit );
    return 0;
}
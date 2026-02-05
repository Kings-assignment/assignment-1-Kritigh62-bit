// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include<stdio.h>
int main()
{
    int days , weeks;
    printf("Enter a number:");
    scanf("%d", &days);
    weeks = days / 7;
    days = days % 7;
     printf("%d weeks and %d days", weeks , days);
     return 0;

}
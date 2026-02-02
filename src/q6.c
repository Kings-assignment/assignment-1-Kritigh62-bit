// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include<stdio.h>
int main ()
{
    int l, w, a;
    printf("Enter length and width:", l, w); 
    
    scanf("%d %d", &l , &w); 
    a = l * w ; 
    printf("The area of rectangle is %d", a);
    return 0;

}
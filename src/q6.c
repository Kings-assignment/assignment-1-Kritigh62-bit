// Write a C program to calculate the area of a rectangle.//
// Prompt the user to enter the length and width, and display the result.//
#include<stdio.h>
int main ()
{   
    // Declare variables: l=length, w= width, a=area//
    int l, w, a;
    //prompt the user to enter length and width//
    printf("Enter length and width:", l, w); 
    // Read length and width//
    scanf("%d %d", &l , &w); 
    // Calculate the area of rectangle//
    a = l * w ; 
    // Display the calculated output//
    printf("The area of rectangle is %d", a);
    return 0;

}
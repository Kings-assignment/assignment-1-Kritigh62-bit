// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include<stdio.h>
int main()
{
    int x, y, z, temp;
    printf("Enter values for x, y, z:");
    scanf("%d %d %d",&x, &y, &z );

    temp = x;
    x = y; 
    y = z;
    z = temp;

    printf("Value of x after swap is %d y is %d and z is %d\n", x, y, z);
    return 0;
}

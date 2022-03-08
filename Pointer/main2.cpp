/**
 * @file main2.c
 * @author tungdeptrai
 * @date 08-03-2022
 * 
 * @brief pass-by-value & pass byb reference.
 */
#include <stdio.h>

// Function Prototype
void swapx(int x, int y);
/*
Call By Value: In this parameter passing method, 
values of actual parameters are copied to function’s formal parameters 
and the two types of parameters are stored in different memory locations. 
So any changes made inside functions are not reflected in actual parameters of the caller.

In this method, 
the value of each variable in calling function is copied 
into corresponding dummy variables of the called function.
*/

/* Main function

int main()
{
    int a = 10, b = 20;
    printf("%d",&a); putchar('\n');
    printf("%d",&b); putchar('\n');
    

    // Pass by Values
    swapx(a, b);

    printf("a=%d b=%d\n", a, b);
    printf("%d",&a); putchar('\n');
    printf("%d",&b); putchar('\n'); // a,b still not change value

    return 0;
}

// Swap functions that swaps

void swapx(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("x=%d y=%d\n", x, y); // x, y has change value
}
*/
#include<stdio.h>

// Function Prototype
void swapx(int*, int*);
/**
 * Call by Reference: 
 * Both the actual and formal parameters refer to the same locations, 
 * so any changes made inside the function are actually reflected in actual parameters of the caller. 
 * 
 * In this method, 
 * the address of actual variables in the calling function 
 * are copied into the temp variables of the called function.
 */
// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(&a, &b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}

// Function to swap two variables
// by references
void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x=%d y=%d\n", *x, *y);
}


/**
 * @file main.c
 * @author tungdeptrai
 * @date 21-02-2022
 * 
 * @brief Move all negative elements to end 
 * EX: Given an unsorted array arr[] of size N having both negative and positive integers.
 *  The task is place all negative element at the end of array 
 * without changing the order of positive element and negative element.
 * 
 * Example 1:
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5

Example 2:
Input : 
N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1

 */

#include <stdio.h>



void partition(int a[], int size){
    int left = 0;
    int right = 0;
    for( ;right < size; ){
        while(a[left] > 0) left++;
        if(left > right) right = left;
        while(a[right] < 0) right++;

        printf("left = %d \nright =%d",left, right); putchar('\n');

        if(right<size){

            int temp = a[right];
            for(int k = right; k != left; --k){
                a[k] = a[k-1];
            }
            a[left] = temp;
        }
        left ++; right++;        
    }
}

int main( void )
{
    int a[] = { 1,2, 3, -4, 5, 6, 7, -8,};
    const int N = sizeof( a ) / sizeof( *a );

    for (int i = 0; i < N; i++)
    {
        printf( "%d ", a[i] );
    }

    putchar( '\n' );

    partition( a, N );

    for (int i = 0; i < N; i++)
    {
        printf( "%d ", a[i] );
    }

    putchar( '\n' );
}
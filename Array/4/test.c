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


void partition( int a[], int n )
{
    for (int i = 0, j = 0; i < n; ) 
    {

        while (j != n && !( a[j] < 0 )) j++;
        printf("j=%d", j); putchar('\n');

        if (!( j < i )) i = j; 

        while (i != n && a[i] < 0) i++; 
        printf("i=%d", i); putchar('\n');

        if (i != n)
        {    
            int temp = a[i];
            printf("temp= a[%d]= %d",i, temp); putchar('\n');

            for ( int k = i; k != j; --k )
            {
                a[k] = a[k-1]; 
            }

            printf("array after a[k] = a[k-1]\n");       
            for(int i=0; i<n; i++){
                printf(" %d", a[i]);
            }
            putchar('\n');

            a[j] = temp;
            printf("a[j=%d]=%d", j, temp); putchar('\n'); 

            printf("array after a[j] = a[temp]\n");       
            for(int i=0; i<n; i++){
                printf(" %d", a[i]);
            }
            putchar('\n');

                i++, j++;


        }

        for(int i=0; i<n; i++){
            printf(" %d", a[i]);
        }

        printf("\n after ++, i=%d, j=%d \n", i ,j);
        putchar('\n');
        putchar('\n');
    }
}

int main( void )
{
    int a[] = { 3, -5, 6, -7, 3, -4, -3, 9 };
    const int N = sizeof( a ) / sizeof( *a );

    printf("start array \n");
    for (int i = 0; i < N; i++)
    {
        printf( "%d ", a[i] );
    }

    putchar( '\n' );
    putchar( '\n' );

    partition( a, N );

    for (int i = 0; i < N; i++)
    {
        printf( "%d ", a[i] );
    }

    putchar( '\n' );
}
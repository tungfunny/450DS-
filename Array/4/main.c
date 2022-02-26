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

#include<stdio.h>

//swap
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
//short, positive, negative
/*
void shortArray(int array[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        if(array[start] < 0){
            swap(&array[start], &array[end]);
            start++;
            end--;
        }
        else start++; end--;
    }
}
*/

void shortArray(int array[], int size){
    int low = 0;
    int mid = 0;
    int high = size-1;

    while(mid < high){
        if(array[mid] < 0){
                swap(&array[low], &array[mid]);
                low++;
                mid++;
        }
        if(array[mid]>=0){
            swap(&array[high], &array[mid]);
            mid++;
            high--;
        }
    }
}

//printarray
void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        printf(" %d", array[i]);
    }
}
int main(){
    int array[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    int size = sizeof(array)/sizeof(array[0]);
    shortArray(array, size);
    printArray(array, size);
    return 0;

}
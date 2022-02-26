/**
 * @file main.c
 * @author tungdeptrai
 * @date 20-02-2022
 *
 * @brief Sort an array of 0s, 1s and 2s
 * EX: Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
 * Example 1:
    Input:
    N = 5
    arr[]= {0 2 1 2 0}
    Output:
    0 0 1 2 2

    Example 2:
    Input:
    N = 3
    arr[] = {0 1 0}
    Output:
    0 0 1

    Explanation:
    0s 1s and 2s are segregated
    into ascending order.
 */

#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int shortArray(int array[], int size){
    int low = 0;
    int mid = 0;
    int high = size-1;

    while(mid < high){
        switch(array[mid]){
            case 0:
                swap(&array[low], &array[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&array[high], &array[mid]);
                mid++;
                high--;
                break;
        }
    }

    return array[size];
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf(" %d", array[i]);
    }
}

void count012(int array, int size){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i=0; i<size; i++){
        switch(array[i]){
            case 0: count0++; break;
            case 1: count1++; break;
            case 2: count2++; break;
        }

        while(count0>0){
            array[i] = 0;
            count0--;
        }
        while(count1>0){
            array[i] = 1;
            count1--;
        }
        while(count2>0){
            array[i] = 2;
            count2--;
        }
    }
}

int main(){
    int array[] = {0, 2, 1, 2, 0, 1, 1, 2, 2, 1, 0};
    int size = sizeof(array)/sizeof(array[0]);
    count012(array, size);
    printArray(array, size);
    return 0;
}


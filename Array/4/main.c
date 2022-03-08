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


void shortArray(int array[], int stack[]){
    int size = 8;
    int left = 0;
    int right = size;
    for(int i=0; i<size; i++){
        //check a[i]
        if(left == right) break;

        int value = array[i];
        if(array[i] > 0){
            stack[left] = value;
            left ++;
        }
        if(array[i] < 0){
            stack[right] = value;
            right--;
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
    int size = 8;
    int stack[size];
    shortArray(array, stack);
    printArray(stack, size);
    return 0;

}
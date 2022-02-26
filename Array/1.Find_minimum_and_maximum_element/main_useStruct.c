/* Find minimum and maximum element in an array
Given an array A of size N of integers.
Your task is to find the minimum and maximum elements in the array.

Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000

Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789
*/

#include <stdio.h>

void print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
//use struct for return two element
struct minmax{
    int min;
    int max;
};
// get min, max
struct minmax get_min_max(int arr[], int size){
    struct minmax;
    int minmax.max = arr[0];
    int minmax.min = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < minmax.min) minmax.min = arr[i];
        if(arr[i] > minmax.max) minmax.max = arr[i];
    }
    return pair;
}
int main(){
    //input arr[], size
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr)/sizeof(arr[0]);
    //print array
    print_array(arr, size);
    // find min_max
    get_min_max(arr, size);
    //print min, max
    printf("\n min = %d \n max = %d",pair.min, pair.max);
    return 0;
}

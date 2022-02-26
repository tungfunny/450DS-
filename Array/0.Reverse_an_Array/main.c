/* Given an array A of size N, print the reverse of it.
Example:
Input:
4
1 5 3 4
Output:
4 3 5 1
*/
#include <stdio.h>

void reverse_array(int A[], int size);
void swap(int* a, int* b);
void print_array(int arr[], int size);

int main(){
    //set input Array, size
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, size);
    //reverse Array
    reverse_array(arr, size);
    //print reverse_Array
    printf("\n After reverse Array:");
    print_array(arr, size);
    return 0;
}
void reverse_array(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left < right){
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
}
void print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


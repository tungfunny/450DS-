/**
 * @file main.c
 * @author tungdeptrai
 * @date 20-02-2022
 * 
 * @brief    Kth smallest element
    EX: Given an array arr[] and an integer K where K is smaller than size of array,
    the task is to find the Kth smallest element in the given array.
    It is given that all array elements are distinct.

    Example 1:
    Input:
    N = 6
    arr[] = 7 10 4 3 20 15
    K = 3
    Output : 7
    Explanation :
    3rd smallest element in the given 
    array is 7.

    Example 2:

    Input:
    N = 5
    arr[] = 7 10 4 20 15
    K = 4
    Output : 15
    Explanation :
    4th smallest element in the given 
    array is 15.
 * 
 */

#include <stdio.h>

/**
 * @brief A utility function to swap two elements
 * 
 * @param a 
 * @param b 
 */
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/**
 * @brief This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot
 * 
 * @param arr 
 * @param low 
 * @param high 
 * @return int 
 */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/**
 * @brief The main function that implements QuickSort
 * 
 * @param arr --> Array to be sorted,
 * @param low --> Starting index,
 * @param high --> Ending index 
 */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size){

    int i;

    for (i=0; i < size; i++)

    printf("%d ", arr[i]);

}


int main(){
    // input arr, size ,k
    int arr[] = {7, 10, 4, 20, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    // short the array
    quickSort(arr, 0, size-1);

    //print the Kth element in array
    printf("Kth = %d", arr[k-1]);

    return 0;
}


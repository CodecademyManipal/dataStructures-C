/*
    Created by: canaryGrapher
    Date: 04/10/2020
    Implementation: Binary Search
*/

#include <stdio.h>

/*
Function to implement binary search (only for sorted arrays)
    ARGUMENTS:
    arr[] - The array (sorted) that needs to be searched 
    firstTermIndex- The index of the number at the starting of the array. By default, the value is 0
    lastTermIndex - The index of the number at the end of the array.
    toBeSearched - The number that needs to be searched 
*/
int binarySearch(int arr[], int firstTermIndex, int lastTermIndex, int toBeSearched)
{
    //check if the parameters are valid. The length of the array should be greater than 0
    if (lastTermIndex >= firstTermIndex) {
        // find the middle term index
        int middleIndex = firstTermIndex + (lastTermIndex - firstTermIndex) / 2;
  
        // Check if the middle element is the number. If yes, return the number index
        if (arr[middleIndex] == toBeSearched)
            return middleIndex;
  
        // If the number is smaller that the middle number,
        // the number is in the left half of the array
        if (arr[middleIndex] > toBeSearched)
            return binarySearch(arr, firstTermIndex, middleIndex - 1, toBeSearched);
  
        // If the number is greater that the middle number,
        // the number is in the right half of the array
        return binarySearch(arr, middleIndex + 1, lastTermIndex, toBeSearched);
    }
  
    // If no element is found, return -1
    return -1;
 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int firstIndex = 0;
    int numberOfElements = sizeof(arr) / sizeof(arr[0]);
    int toFind = 7;
  
    int Result = binarySearch(arr, firstIndex, numberOfElements - 1, toFind);
    Result == -1 ? printf("Could not find element in the array") : printf("Element is at index %d", Result);
    
    return 0;
}

/*
    Created by: canaryGrapher
    Date: 08/10/2022
    Implementation: Linear Search
*/

/*
Function to implement linear search (only for sorted arrays)
    ARGUMENTS:
    arr[] - The array (sorted) that needs to be searched 
    size - The size of the array
    toBeSearched - The number that needs to be searched 
*/
int linearSearch(int arr[], int toBeSearched, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == toBeSearched) {
            return i;
        }
    }
    return -1;
}
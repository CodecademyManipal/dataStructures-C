/*
    Created by: canaryGrapher
    Date: 11/10/2022
    Implementation: Bubble Sort
*/

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/*
Function to implement bubble sort
    ARGUMENTS:
    arr[] - The array that needs to be sorted
    size - The size of the array
*/
int bubbleSort(int arr[], int size)
{
   int i, j;
   for (i = 0; i < size-1; i++) {
       // Last i elements are already in place    
       for (j = 0; j < size-i-1; j++)   {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
       }
   }
   return 0;
}
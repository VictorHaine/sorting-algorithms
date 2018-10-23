
/*
  This selection sort starts from the end of the array.
  I like more starting at first index, but thats the same thing.
*/

void selectionSort(int arr[], int n) {
   int i, j;
   for (i = n-1; i >=0; i--)     {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}


int select(int arr[], int i)
{
    int max = i;
    
    for(int j = i; j >= 0; j--)
        if(arr[j] > arr[max])
            max = j;
            
    return max;
}
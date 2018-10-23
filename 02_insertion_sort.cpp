/*
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
}
*/

void insert(int arr[], int i)
{
    // i = 1
    //4 1 3 9 7
    
    int value = arr[i];
    int j = i-1;
    
    while(j>=0 && arr[j] > value) {
        arr[j+1] = arr[j];
        j--;
    }
    
    arr[j+1] = value;
}
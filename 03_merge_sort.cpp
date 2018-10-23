
void merge(int arr[], int l, int m, int r)
{
    int i = l, j = m+1, k = 0;
    int temp[r-l+1];
    
    while(i <= m && j <= r)
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    
    while(i<=m) 
        temp[k++] = arr[i++];
    
    while(j<=r)
        temp[k++] = arr[j++];
        
    for(i=l, j=0; i<= r; i++, j++)
        arr[i] = temp[j];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
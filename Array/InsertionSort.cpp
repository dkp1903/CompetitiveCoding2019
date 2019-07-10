//Insertion sort
void insertionSort(int a[], int n)
{
    int key, i, j;
    for(i = 1 ; i < n ; i++)
    {
        key = a[i];
        j = i - 1;
        
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}                                                             

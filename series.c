#include <stdio.h>
void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n ,key,arr[500];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    insertion_sort(arr, n);

    printf("\n\nAfter sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

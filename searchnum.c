#include <stdio.h>
int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[50],n,key;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printf("Enter the value to search:");
    scanf("%d",&key);
     int index = binary_search(arr, n, key);
    if (index == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found at index %d\n", index);
    }
    return 0;
}

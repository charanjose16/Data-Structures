#include <stdio.h>
int linear_search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printf("Enter the value to search:");
    scanf("%d",&key);
    int index = linear_search(arr, n, key);
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

#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}
int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}

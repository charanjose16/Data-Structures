#include <stdio.h>

int main()
{
    int num, i;
    int numbers[10];

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("The odd numbers are: ");
    for (i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            printf("%d ", numbers[i]);
        }
    }

    printf("\nThe even numbers are: ");
    for (i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}

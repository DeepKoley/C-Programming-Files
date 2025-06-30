#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[100];

    printf("---------------------------------------------------------------\n");
    printf("How many element will you want: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("||---------------------------------------------------||\n");
    printf("Bubble sort are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n||---------------------------------------------------||\n\n");
}

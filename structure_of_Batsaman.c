#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct batsman
{
    char name[100];
    int match;
    int runs;
};

int main()
{
    struct batsman *bptr, temp;
    int i, j, n;

    printf("--------------------------------------------------\n");
    printf("Details of Batsmen\n");
    printf("--------------------------------------------------\n");

    printf("Enter number of batsmen: ");
    scanf("%d", &n);

    bptr = (struct batsman *)malloc(n * sizeof(struct batsman));

    if (bptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    getchar();

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of batsman %d\n", i + 1);

        printf(" Enter Name: ");
        fgets((bptr + i)->name, sizeof((bptr + i)->name), stdin);

        (bptr + i)->name[strcspn((bptr + i)->name, "\n")] = '\0';

        printf("Total matches played: ");
        scanf("%d", &(bptr + i)->match);

        printf("Total runs scored: ");
        scanf("%d", &(bptr + i)->runs);

        getchar();
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if ((bptr + j)->runs < (bptr + j + 1)->runs)
            {
                temp = bptr[j];
                bptr[j] = bptr[j + 1];
                bptr[j + 1] = temp;
            }
        }
    }

    printf("\n\n------------------ List of Batsmen ------------------\n");
    printf("%-20s %-20s %-20s\n", "Name", "Matches Played", "Total Runs");
    printf("-----------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-20s %-20d %-20d\n", bptr[i].name, bptr[i].match, bptr[i].runs);
    }

    free(bptr);

    return 0;
}

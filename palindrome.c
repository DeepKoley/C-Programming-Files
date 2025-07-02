#include <stdio.h>
int main()
{
    int n, sum = 0, temp, r;

    printf("Enter number which will you want: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        r = temp % 10;
        sum = r + (sum * 10);
        temp = temp / 10;
    }
    if (n == sum)
    {
        printf("It  is palindrome number");
    }
    else
    {
        printf("It is not plaindrome number");
    }

    return 0;
}
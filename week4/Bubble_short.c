#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int ara[1000];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
}
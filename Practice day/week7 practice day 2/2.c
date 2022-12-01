#include <stdio.h>

void swap(int *x, int *y, int n)
{
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *x + 1);
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c1 = arr[0];
    int c2 = arr[1];

    swap(&c1, &c2, n);
}
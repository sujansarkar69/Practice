#include <stdio.h>

int fact(int n)
{
    int i, facto = 1;
    for (i = 1; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
int ratio_check(int a, int b)
{
    int f1 = fact(a);
    int f2 = fact(b);

    return (f1 / f2);
}
int main()
{
    int n, x, y;
    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    printf("%d", fact(n));
    printf("\n%d", ratio_check(x, y));
    return 0;
}
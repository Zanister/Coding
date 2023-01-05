#include <stdio.h>

int main()
{
    int a[100];
    int n, k, i, j, count = 0;
    scanf("%d %d", &n, &k);
    fflush(stdin);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 1; j <= n; j++)
    {
        if (a[j] >= a[k] && a[j] > 0)
        {
            count++;
        }
    }
    printf("%d", count);
}

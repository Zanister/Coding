#include <stdio.h>
#include <string.h>
int main()
{
    char str[4][100] = {"x++", "++x", "x--", "--x"};
    int i, n, x = 0;
    scanf("%d", &n);
    char bit[n][100];
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        gets(bit[i]);
        if (strcmp(bit[i], str[0]) == 0)
        {
            x++;
        }
        else if (strcmp(bit[i], str[1]) == 0)
        {
            ++x;
        }
        else if (strcmp(bit[i], str[2]) == 0)
        {
            x--;
        }
        else if (strcmp(bit[i], str[3]) == 0)
        {
            --x;
        }
    }
    printf("%d", x);
}
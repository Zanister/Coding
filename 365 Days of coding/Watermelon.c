#include <stdio.h>

void solve()
{
    int x;
    scanf("%d", &x);

    if (x <= 2 || x % 2 != 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}

int main()
{
    solve();

}
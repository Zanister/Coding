#include <stdio.h>

int main()
{
    int n,a,b,c,count=0;
    scanf("%d", &n);
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a+b+c >= 2)
        {
            count++;
        }
        
    }

    printf("%d", count);    
}
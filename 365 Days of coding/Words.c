#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[101];
    int l, index, flag = 1;
    int cases;
    scanf( "%d ", &cases);
    for (int j = 0; j < cases; j++)
    {
        gets(word);
        l = strlen(word);
        index = l - 1;
        int i;
        for (i = 0; word[i] != '\0'; i++)
        {
            if (isdigit(word[i]))
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {

            if (l > 10)
            {
                printf("%c%d%c\n", word[0], l - 2, word[index]);
            }
            else
            {
                printf("%s\n", word);
            }
        }
    }
}
#include <stdio.h>

int main()
{
    int i,j,n,k;;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10-i; j++)
        {
        printf("  ");
        }

            for (k=1; k <= i; k++){
            if (i==1){
                printf(" * ");
                     }

            if (i!=1 && i!=6)
                    {
                        printf(" %d", j);
                        
                    }
            if (i==6) {
                        printf(" *");
                        
                }
            }
            printf("\n");
        }
    
    }

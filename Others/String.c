#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char str1[40] = "hey i am going to remove spaces";
    char str2[40];  
      
    for ( i = 0; str1[i] != '\0'; i++)
    {
        
        if (str1[i] != ' ')
        {

            str2[i] = str1[i];
            printf("%c", str2[i]);
        }
        
                
    }
    
}
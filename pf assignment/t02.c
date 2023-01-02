#include <stdio.h>
#include <string.h>
char f1(void);
char f2(void);
int main() {
    int ch;
    for(ch = 1; ch <= 12; ch++) {
    printf( "The following describes your menu: -\n");
    printf("Enter 1 to input string A.\n");
    printf("Enter 2 to input string B.\n");
    printf("Enter 3 to compare and display strings.\n");
    printf("Enter 4 to find all occurrences of sub-string B in string A. \n");
    printf("Enter 5 to replace your input string C with B in string A.\n");
    printf("Enter 6 to swap string A and B.\n");
    printf("Enter 7 to delete all occurrences of sub-string B in A.\n");
    printf("Enter 8 to reverse the contents of string A.\n");
    printf("Enter 9 to determine whether or not string B is a palindrome.\n");
    printf("Enter 10 to change the string A into title case.\n");
    printf("Enter 11 to delete alternate words from string.\n");
    printf("Enter 12 to end the program\n");
    printf("Enter your choice: ");
    printf("\n");
    scanf("%d", &ch);
        switch(ch) {
            case 1:
                char A = func1();
                break;
            case 2:
                char B = func2();
                break; 
            case 12:
                printf("\nYour program is finished.");
                break;                                     
        }
    }
    return 0;
}
char f1(void) {

    printf("Enter Ist string: ");
    char A[30];
    scanf("%s", &A);
    return A[30];
}

char f2(void) {
    char B[30];
    printf("Enter 2nd string: ");
    scanf("%s", &B);
    return B[30];
}
#include <stdio.h>
void combo(int arr[], int);
int main() {

    int k = 7;
    int pas[k+2];
    printf("Enter the number of rows: ");
    int row;
    scanf("%d", &row);
    combo(pas, row);
    return 0;
}

void combo(int arr[], int r) {
    for (int i=0; i<r ; i++) {        
        for (int j=0; j<=i ; j++) {
            //Making the combo
            int comb=1;
            printf("");
            int k=0;
            while (k<j) {
                comb = comb * (i-k);
                comb = comb / (k+1);
                k++;
            }
            arr[j]= comb;

            printf("%4d", arr[j]);
        }

        printf("\n");
    }
}
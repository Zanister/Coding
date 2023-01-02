//<---University's Event registration system---->|
#include <stdio.h>
void seat_for_student(int);
void seat_for_teacher(int);
void seat_for_guest(int);
void status_info(int, int, int);

static int i = 1, j = 1, k = 1;

int main() {
    int sos, sot, sog, ch;
    printf("Enter total no. of seats for students:");
    scanf("%d", &sos);
    printf("Enter total no. of seats for teachers:");
    scanf("%d", &sot);
    printf("Enter total no. of seats for guests:");
    scanf("%d", &sog);
    printf("\n");

    for(ch = 1; ch <= 5; ch++) {
        
        printf("For a student's seat reservation, enter 1..\n");
        printf("To reserve a seat for the teacher, enter 2.\n");
        printf("For a guest seat reservation, enter 3.\n");
        printf("Enter 4 to obtain status information. \n");
        printf("Enter 5 to terminate the application.\n");
        printf("/n");
        printf("Enter your selection:");

        scanf("%d", &ch);
        switch(ch) {
            case 1:   
            seat_for_student(sos);
                break;
            case 2:   
            seat_for_teacher(sot);
                break;
            case 3:  
             seat_for_guest(sog);
                break;
            case 4:   
            status_info(sos, sot, sog);
                break;
            case 5:  
             printf("The program has ended");
                break;
        }
    }
    return 0;
}

void seat_for_student(int ts) {
    
    char nm[1][25];
    printf("Enter student's name:");
    scanf("%s", &nm);
    printf("Enter student's ID:");
    int id;
    scanf("%d", &id);
    printf("Enter student's class:");
    char cls[1][25];
    scanf("%s", &cls);
    printf("");
//Printing the results
    if(i <= ts) {
        printf("\n%s has reserved seat no: %d\n", nm, i);
        printf("\n");
        i++;
    }
    if(i > ts) {
        printf("All the seats are reserved!\n\n");
    }
}

void seat_for_teacher(int tt) {
    char nm[1][25];
    printf("Enter teacher's name:");
    scanf("%s", &nm);
    char dep[1][25];
    printf("Enter teacher's department:");
    scanf("%s", &dep);

    if(j <= tt) {
        printf("\n%s has reserved seat no: %d\n\n", nm, j);
        j++;
    }
    if(j > tt) {
        printf("All the seats are reserved!\n");
    } 
}

void seat_for_guest(int t) {
    char nm[1][25];
    printf("Enter guest's name:");
    scanf("%s", &nm);
    printf("Enter guest's organization:");
    char org[1][25];
    scanf("%s", &org);

    if(k <= t) {
        printf("\n%s has reserved seat no: %d\n", nm, k);
        printf("\n");
        k++;
    }
    if(k > t) {
        printf("All the seats are reserved!\n");
        printf("\n");
    }
}

void status_info(int ts, int tt, int t)
{
    int rem_sos, rem_sot, rem_sog;
    rem_sos = ts - i+1;
    rem_sot = tt - j+1;
    rem_sog = t - k+1;
    printf("\nThe remaining seats for students, teachers, and visitors are %d, %d and %d, respectively.\n", rem_sos, rem_sot, rem_sog);
    printf("\n");
    
    int tot = (i+j+k) - 3;
    printf("");
    printf("Total filled seats are: %d\n", tot);
    printf("\n");

    int avail = (ts+tt+t) - (tot);
    printf("Total available seats are: %d\n", avail);
    printf("\n");
}
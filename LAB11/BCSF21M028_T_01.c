#include <stdio.h>
struct Date
{
    char dayn[30];
    int date;
    char month[40];
    int year;
};

struct car
{
    int srNum;
    char make[20];
    char model[30];
    int year;
    struct Date purchaseDate;
};

int main()
{
    struct car *data;
    struct car cardata[5];

    int count = 0;
    int op = 0;

    while (op != 11)
    {
        printf("1. Add Car \n");
        printf("2. Edit Car Details\n");
        printf("3. Search car \n");
        printf("4. Delete Car \n");
        printf("5. Show Complete Report \n");
        printf("6. Show car of specific make \n");
        printf("7. Show car of specific model \n");
        printf("8. show cars with specific Year \n");
        printf("9. Search using multiple fields \n");
        printf("10. Show Status \n");
        printf("11. Exit \n\n");

        printf("Enter your Choice: ");
        scanf("%d", &op);

        switch (op)
        {

        case 1:
        {
            int num;
            printf("Enter the Number of cars You want to add: ");
            scanf(" %d", &num);
            for (int i = 0; i < num; i++)
            {
                printf("Enter the Details\n\n");
                printf("Enter the serial number: ");
                scanf("%d", &obj[i].srNum);
                printf("Enter Make: ");
                scanf(" %[^\n]s", obj[i].make);
                printf("Enter Model: ");
                scanf(" %[^\n]s", obj[i].model);
                printf("Enter Year: ");
                scanf(" %d", &obj[i].year);
                printf("Enter the Date of Purchase\n");
                printf("Day name: ");
                scanf(" %[^\n]s", obj[i].purchaseDate.dayn);
                printf("Date: ");
                scanf(" %d", &obj[i].purchaseDate.date);
                printf("Month: ");
                scanf(" %[^\n]s", obj[i].purchaseDate.month);
                printf("Year: ");
                scanf("%d", obj[i].purchaseDate.year);
                data++;
                count++;
            }
            break;
        }

        case 2:
        {
            printf("Enter the SrNum to Edit Car details: ");
            int num;
            scanf("%d", &num);
            for (int i = 0; i <= count; i++)
            {
                if (num == obj[i].srNum)
                {

                    printf("Enter the Details\n\n");
                    printf("Enter the serial number: ");
                    scanf("%d", &obj[i].srNum);
                    printf("Enter Make: ");
                    scanf(" %s", obj[i].make);
                    printf("Enter Model: ");
                    scanf(" %s", obj[i].model);
                    printf("Enter Year: ");
                    scanf("%d", &obj[i].year);
                    printf("Enter the Date of Purchase\n");
                    printf("Day name: ");
                    scanf("%s", obj[i].purchaseDate.dayn);
                    printf("Date: ");
                    scanf("%d", &obj[i].purchaseDate.date);
                    printf("Month: ");
                    scanf(" %s", obj[i].purchaseDate.month);
                    printf("Year: ");
                    scanf("%d", obj[i].purchaseDate.year);
                    data++;
                    count++;
                }
                break;
            }
        }
        case 3:
        {
            printf("Enter the SrNum to Show Car details: ");
            int num;
            scanf("%d", &num);
            for (int i = 0; i <= count; i++)
            {
                if (num == obj[i].srNum)
                {
                    printf("CAR FOUND\n\n");
                    printf("Make: %s\n", obj[i].make);
                    printf("Model: %s\n", obj[i].model);
                    printf("Year: %d\n", obj[i].year);
                    printf("Date of Purchase: %s, %s %d, %d\n", obj[i].purchaseDate.dayn, obj[i].purchaseDate.month, obj[i].purchaseDate.date, obj[i].purchaseDate.year);
                }
                count++;
            }
            break;
        }
        case 4:
        {

            printf("Enter the SrNum to Delete Car: ");
            int num;
            scanf("%d", &num);
            for (int i = 1; i <= count; i++)
            {
                if (num == obj[i].srNum)
                {

                    obj[i].srNum = -999;
                }
                count++;
            }
            break;
        }
        case 5:
        {
            for (int i = 0; i <= count; i++)
            {
                printf("the data of the entered cars is given below:\n");
                printf("the serial no. is: %d\n the make of the car is: %s\n the model of the car is: %s\nthe lauch year is: %d\n", obj[i].srNum, obj[i].make, obj[i].model, obj[i].year);
                printf("the day of purchase is:%s\nthe date of puchase is:%d\nthe month of purchase is:%s\nthe purchasing year is:%d\n", obj[i].purchaseDate.day_of_week, obj[i].purchaseDate.date, obj[i].purchaseDate.month, obj[i].purchaseDate.year);
                obj[i]++;
            }
            break;
        }
        case 6:
        {
            char com[20];
            int f, d;
            printf("enter the car make to print that cars of that make.\n");
            scanf("%[^\n]s", &com);
            for (int i = 0; i <= count; i++)
            {
                d = strcpy(com, obj[i].make);
                if (d == 0)
                {
                    printf("the serial no. is: %d\n the make of the car is: %s\n the model of the car is: %s\nthe lauch year is: %d\n", obj[i].srNum, obj[i].make, obj[i].model, obj[i].year);
                    printf("the day of purchase is:%s\nthe date of puchase is:%d\nthe month of purchase is:%s\nthe purchasing year is:%d\n", obj[i].purchaseDate.day_of_week, obj[i].purchaseDate.date, obj[i].purchaseDate.month, obj[i].purchaseDate.year);
                }
                f = 1;
            }
            count++;
        }
        break;
        case 7:
        {
            char com[20];
            int f, d;
            printf("enter the car model to print cars of that model.\n");
            scanf("%[^\n]s", &com);
            for (int i = 0; i <= count; i++)
            {
                d = strcpy(com, obj[i].make);
                if (d == 0)
                {
                    printf("the serial no. is: %d\n the make of the car is: %s\n the model of the car is: %s\nthe lauch year is: %d\n", obj[i].srNum, obj[i].make, obj[i].model, obj[i].year);
                    printf("the day of purchase is:%s\nthe date of puchase is:%d\nthe month of purchase is:%s\nthe purchasing year is:%d\n", obj[i].purchaseDate.day_of_week, obj[i].purchaseDate.date, obj[i].purchaseDate.month, obj[i].purchaseDate.year);
                }
                f = 1;
            }
            count++;
            if (f == 0)
            {
                printf("NOT MATCHED.");
            }
        }
        case 8:
        {
            int yr1, yr2, f;
            printf("enter the year to get cars with specific year.\n");
            scanf("%d", &yr1);
            scanf("%d", &yr2);

            for (int i = 0; i <= count; i++)
            {
                if ((obj[i].year >= yr1 && obj[i].year <= yr2) || ((obj[i].year <= yr1 && obj[i].year >= yr2)))
                {
                    printf("which is FOUND");
                    printf("the serial no. is: %d\n the make of the car is: %s\n the model of the car is: %s\nthe lauch year is: %d\n", obj[i].srNum, obj[i].make, obj[i].model, obj[i].year);
                    printf("the day of purchase is:%s\nthe date of puchase is:%d\nthe month of purchase is:%s\nthe purchasing year is:%d\n", obj[i].purchaseDate.day_of_week, obj[i].purchaseDate.date, obj[i].purchaseDate.month, obj[i].purchaseDate.year);
                }
                f = 1;
                // exit
            }
            count++;
            if (f == 0)
            {
                printf("NOT FOUND.");
            }
        }
        default:
            printf("Enter Wrong NUmber.");
        }
    }
}
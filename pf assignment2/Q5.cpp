#include <iostream>
using namespace std;

int main (void)
{
    int yrs,inch,sum=0,months;
    cout << "Enter the number of years: "<< endl;
    cin >> yrs;
    while (yrs<1)
    {
        cout << "Invalid input! Enter again: ";
        cin >>yrs;
    }
    for (int i = 1; i <= yrs; i++)
    {
        cout << "For Year " << i<< " ,";
        for (int j = 1; j <= 12; j++)
        {
            cout << "Inches of rain fall for month " << j <<":"<< endl;
            cin >> inch;
            while (inch<0)
            {
            cout << "Invalid input! Inches of rain fall for month " << j <<":"<< endl;
            cin >> inch;
            } 
            sum =sum +inch;
        }   
    }
    months = 12 *yrs;
    cout << "Number of months: " << months << endl;
    cout << "Total Inches of rain fall: "<< sum << endl;
    cout << "Average rainfall per month: " << sum/months<<endl;

    return 0;
    
}
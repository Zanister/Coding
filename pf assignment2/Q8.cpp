#include <iostream>
using namespace std;

int main ()
{
    int avg,sum=0,size;
    int arr[5] = {10,11,12,13,14};
    size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        sum =sum + arr[i];
    }
    avg = sum/size;
    cout << "Average of all elements: "<<avg;
}
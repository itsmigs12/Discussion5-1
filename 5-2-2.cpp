#include <iostream>
#include <cstdlib>
using namespace std;

void makearray(int n[], int N);
void printarray(int n[], int N);
void findminmax(int n[], int N);

int main()
{
    const int n = 10;
    int numbers[n];
    makearray(numbers, n); //Values first passed into makearray
    printarray(numbers, n);     
    findminmax(numbers, n);     
    return 0;
}
void makearray(int n[], int N)  
{
    int A;
    for (int i = 0; i < N; i++)
    {
        A = rand() % 100;       //For loop fills array of size 10 with random ints
        n[i] = A;
    }
}
void printarray(int n[], int N) 
{
    cout << "Stored values in array: " << endl; //Values of array are passed into printarray and values are displayed on screen
    for (int i = 0; i < N; i++)
    {
        cout << n[i] << " ";
    }
}
void findminmax(int n[], int N)
{
    int Min, Max;
    Min = 0;        //Here we initialize 2 variables, Min/Max, to store our found max/min
    Max = 0;
    int& MaxA = Max;            //Address of Min/Max used to get int stored by makearray
    int& MinA = Min;
    for (int i = 0; i < N; i++)
    {
        if ((i == 0) || (MaxA < n[i]))
        {
            MaxA = n[i];            //For loop goes through each int to store Max/Min value
        }
    }
    for (int i = 0; i < N; i++)
    {
        if ((i == 0) || (Min > n[i]))       //For loop goes through each int to store Max/Min value
        {
            Min = n[i];
        }
    }
    cout << "\nMax Value in Array: " << MaxA  << "\nMin Value in Array: " << MinA; //Final values are displayed on screen
}
// function with 3 parameters - r, unit, integer array of size n
// r represents the number of rats
// unit represents the amount of food each rat consumes
// each element of the array represents the amount of food present in each house
// return the minimum no of house required to provide all the rats food
#include <bits/stdc++.h>
using namespace std;
#define N 5
int minRequirement(int r, int unit, int arr[])
{
    int totalfood = r * unit;
    int requireFood = 0, count = 0;
    while (requireFood <= totalfood)
    {
        int max1 = *max_element(arr, arr + N);
        requireFood += max1;
        int indexofmax = distance(arr, max_element(arr, arr + N));
        arr[indexofmax] = INT_MIN;
        count++;
    }
    return count;
}
int main()
{
    int arr[N] = {24, 452, 641, 352, 1};
    int r = 20;
    int unit = 73;
    cout << "The minimum of no of houses required is/are - " << minRequirement(r, unit, arr);
    // for(int i=0;i<N;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
}
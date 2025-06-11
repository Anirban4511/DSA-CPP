/*Find the single number that appears once*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //finding the single appearance wala digit in the array
    for (int i = 0; i < n; i++)
    {
        x=x^arr[i];
    }

    cout<<"The single digit is = "<<x;
    
}
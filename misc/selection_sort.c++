#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    //Enter the elements of the array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorting logic
    for (int i = 0; i < n-1; i++)
    {
       int min=i;
       for (int j = i+1; j < n; j++)
       {
            if(arr[j]<arr[min])
            {
                min=j;
            }
       }
       int temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
      
    }

    //printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// Rearrange element by their corresponding sign of positive and negative
#include<iostream>
using namespace std;
int main()
{
    // int arr[]={3,1,-2,-5,2,-4};
    int arr[]={1,2,-4,-5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=0,neg=1;
    int res[n]={0};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            res[pos]=arr[i];
            pos+=2;
        }
        else{
            res[neg]=arr[i];
            neg+=2;
        }
    }
    //printing the array elements
    for(int i =0 ; i<n; i++)
    {
        cout<<res[i];
    }
}
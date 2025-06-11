#include<iostream>
bool linearSearch(int arr[],int size,int target);
using namespace std;
int main()
{
    int arr[]={10,4,9,1,8,7,104,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x,longest=1,count=0;
    for(int i=0;i<n;i++)
    {
        x=arr[i];
        count=1;
        while(linearSearch(arr,n,x)==true)
        {
            x=x+1;
            count+=1;
        }
        if(count>longest)
        {
            longest=count;
        }

    }
    cout<<"The largest consecutive sequence - "<<longest;
}
bool linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        // cout<<arr[i]<<endl;
        if(arr[i]==target+1)
        {
            return true;
        }
    }
    return false;
}

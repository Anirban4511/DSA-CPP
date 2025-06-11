#include<iostream>
using namespace std;
int floorValue(int arr[],int l,int h,int x)
{
    int ans=arr[h];
    int mid=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]<=x)
        {
            ans=arr[mid];
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int ceilValue(int arr[],int l,int h,int x)
{
    int ans=x;
    int mid=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]>=x)
        {
            ans=arr[mid];
            h=mid-1;
           
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={10,20,25,30,40};
    int x=25;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The floor value of "<<x<<" is "<<floorValue(arr,0,size-1,x)<<endl;
    cout<<"The ceil value of "<<x<<" is "<<ceilValue(arr,0,size-1,x);

}
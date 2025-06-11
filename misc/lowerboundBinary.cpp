#include<iostream>
using namespace std;
int findIndex(int arr[],int l,int h,int target)
{
    int mid=0,ans=h+1;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,5,8,8,10,10,11};
    int target=9;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The lower bound of target "<<target<<" is present at "<<findIndex(arr,0,size-1,target);
}
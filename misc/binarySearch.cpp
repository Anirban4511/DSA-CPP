#include<iostream>
using namespace std;
int findIndex(int arr[],int start,int end,int target)
{
    while(start<=end)
    {
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    return -1;
}
int main()
{
     int arr[]={3,4,5,6,7,8,9,10,11,12,13};
     int size=sizeof(arr)/sizeof(arr[0]);
     int target=7;
     cout<<"The target no"<<target<<"is found in index"<<findIndex(arr,0,size,target);
}
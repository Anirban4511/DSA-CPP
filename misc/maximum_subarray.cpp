#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-5,-2,3,6,-3,-1,8};
    // int arr[]={-2,-3,4,-1,-2,3,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum = 0,k=0,count=0,p=0,start=0,end=0;
    int max = arr[0];
    for (int i =0;i<n;i++)
    {
        if (sum < 0)
        {
            sum = 0;
        }
        sum += arr[i];
        if(sum>0 && count==0)
        {
            count++;
            start=i;
            p=sum;
        }
        if(sum>=p)
        {
            end=i;
        }
        if (max<sum)
        {
            max = sum;
        }
    }
    cout << max<<endl;
    //printing the subarray
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
}
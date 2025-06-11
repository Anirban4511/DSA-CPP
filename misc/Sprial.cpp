// 1   2   3   4                   
// 5   6   7   8       -----   1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// 9   10  11  12      -----   
// 13  14  15  16
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4];
    int top=0,bottom=3,left=0,right=3;
    int k=0;
    int ans[4*4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing the array 
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    // }
    

    //for the horizontal side 
    for(int i=left;i<=right;i++)
    {
        ans[k++]=arr[left][i];
    }
    top+=1;
    //for the right vertical side
    for(int i=top;i<=bottom;i++)
    {
        ans[k++]=arr[i][right];
    }
    right-=1;
    //for the lower horizontal side 
    for(int i=right;i>=left;i--)
    {
        ans[k++]=arr[bottom][i];
    }
    bottom-=1;
    //for left vertical side
    for(int i=bottom;i>=top;i--)
    {
        ans[k++]=arr[i][left];
    }
    left+=1;
    //for the inner horizontal like 67 
    for(int i=left;i<=right;i++)
    {
        ans[k++]=arr[top][i];
    }
    top+=1;
    //for the inner right 11
    for(int i=top;i<=bottom;i++)
    {
        ans[k++]=arr[i][right];
    }
    right-=1;
    //printing the last element aka lower horizontal side
    for(int i=right;i>=left;i--)
    {
        ans[k++]=arr[bottom][i];
    }
    // cout<<k;
    cout<<"------------------"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<ans[i];
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,max1=0,max2=0;
    cout<<"Enter the rows and column of the matrix"<<endl;
    cin>>n>>m;
    int arr[n][m];
    //taking the input of the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing the matrix value 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    //logic for the max one in diagonal
      for(int i=0;i<n;i++)
    {
        if(arr[i][m-i-1]==1)
            {
                max2++;
            }
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                if(arr[i][j]==1)
                {
                    max1++;
                }
            }
        }
    }
    cout<<max1<<" "<<max2;
    if(max1==max2)
    {
        cout<<"1's are same in the diagonal";
    }
    else if(max1>max2)
    {
        cout<<"1's are maximum in the left diagonal";
    }
    else{
        cout<<"1's are maximum in the right diagonal";
    }
}
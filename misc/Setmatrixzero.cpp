#include<iostream>
using namespace std;
const int n=4,m=4;
// void markRow(int arr1[n][m],int i,int col);
// void markColumn(int arr2[n][m],int j,int row);
void markRow(int arr[n][m],int i,int col)
{
    for(int j=0;j<col;j++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}
void markColumn(int arr[n][m],int j,int row)
{
    for(int i=0;i<row;i++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}
int main()
{
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"enter the"<<i+1<<"element"<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"Orignal Arrays - "<<endl;
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
            
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                markRow(a,i,m);
                markColumn(a,j,n);
            }
        }
    }
    cout<<"NEW Array - "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
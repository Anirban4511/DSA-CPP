// write a program to print all the subsequence of an array like {1,2,3} like
// {},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3} here order is important

// Subset : Order is not important but as the given array order is given we
// will write in this way

#include<bits/stdc++.h>
using namespace std;
// #include<vector>
int main()
{
    int arr[]={1,2,3};
    vector<vector<int>>a;
    a.push_back({});
    int result=0;
    for(int i=0;i<3;i++)
    {
        a.push_back({arr[i]});
        result=result*10+arr[i];
        for(int j=i+1;j<=2;j++)
        {
            a.push_back({arr[i],arr[j]});
        }
    }
    a.push_back({result});
    for(int i=0;i<8;i++)
    {
        cout<<"{";
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<"}";
    }
}
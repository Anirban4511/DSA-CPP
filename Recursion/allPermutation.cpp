#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
}

vector<vector<int>>printAllPermutation(vector<int>&arr,int ind,int size)
{
    vector<vector<int>>result;
    if(ind==size)result.push_back(arr);
    for(int i=ind;i<size;i++)
    {
        swap(arr[i],arr[ind]);
        return printAllPermutation(arr,ind+1,size);
    }
    return result;
}
int main()
{
    vector<int>arr={1,2,3};
    int size=arr.size();
    vector<vector<int>>result;
    result=printAllPermutation(arr,0,size);
    for(int i=0;i<result.size();i++)
    {
        cout<<"{";
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }

}
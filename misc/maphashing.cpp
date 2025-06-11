#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mpp;
    cout<<"Enter the array elements-";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }


    int q;
    cout<<"Enter the query elements size - ";
    cin>>q;
    while(q--)
    {
        cout<<"Enter the query elements";
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

}
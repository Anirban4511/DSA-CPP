#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string n;
    cin>>n;

    int hash[26]={0};
    for(int i=0;i<n.length();i++)
    {
        hash[n[i]-'a']+=1;
    }

    //Printing the frequency of the array elements
    for(int i=0;i<n.length();i++)
    {
        cout<<hash[n[i]-'a'];
    }
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n='d'-'a';
//     cout<<n;
// }
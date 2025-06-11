#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;
    mp[1]="Alice";
    mp[8]="Bob";
    mp[2]="Jacob";
    for(auto it:mp)
    {
        cout<<it.first<<":"<<it.second<<endl;
    }
}
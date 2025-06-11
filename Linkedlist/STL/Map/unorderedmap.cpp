#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string>mp;
    mp[1]="Alice";
    mp[8]="Bob";
    mp[2]="Jacob";
    // for(auto it:mp)
    // {
    //     cout<<it.first<<":"<<it.second<<endl;
    // }
    // if(mp.find(8)!=mp.end())
    // {
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    if(mp.count(8))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

}
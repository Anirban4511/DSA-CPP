#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={2,3,4,5,6};
    // // for(int value:v){
    // //     cout<<value<<endl;
    // // }
    // for(int &value:v)
    // {
    //     value++;
    // }
    // for(int value:v)
    // {
    //     cout<<value<<endl;
    // }
    //for the case of vector of pairs
    vector<pair<int,int>>vp={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value:vp)
    {
        value.first++;
        value.second++;
    }
    for(pair<int,int>value:vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}
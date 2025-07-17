#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&pairs1,pair<int,int>&pairs2)
{
    if((pairs1.first/pairs1.second)>(pairs2.first/pairs2.second))return true;
    else return false;
}

int main()
{
    vector<pair<int,int>>v={{100,20},{60,10},{100,50},{200,50}};
    sort(v.begin(),v.end(),comp);
    //printing the vector 
    for(int i =0;i<v.size();i++)
    {
        cout<<"{"<<v[i].first<<","<<v[i].second<<"}"<<endl;
    }

}
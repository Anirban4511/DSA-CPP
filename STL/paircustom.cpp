/*
    Let's check how the custom comparator works for the complex data structure like 
    vector of pairs.
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&pairs1,pair<int,int>&pairs2)
{
    if(pairs1.first!=pairs2.first)return pairs1.first>pairs2.first;
    else return pairs1.second<pairs2.second;
}
int main()
{
    vector<pair<int,int>>v={{2,3},{23,34},{1,2},{23,4},{3434,2}};
    sort(v.begin(),v.end(),comp);
    //printing the vector of pairs 
    for(int i=0;i<v.size();i++)
    {
        cout<<"{"<<v[i].first<<","<<v[i].second<<"}"<<endl;
    }

    //output be like that :
    /*
            {3434,2}
            {23,4}
            {23,34}
            {2,3}
            {1,2}
    */
}
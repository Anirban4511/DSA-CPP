#include<bits/stdc++.h>
using namespace std;
vector<int> mergeSorted(vector<int>&v1,vector<int>&v2)
{
    vector<int>result;
    int i,j;
    i=j=0;
    while(i<v1.size()||j<v2.size())
    {
        if(i>=v1.size()){
            result.push_back(v2[j]);
            j++;
            continue;
        }
        if(j>=v2.size())
        {
            result.push_back(v1[i]);
            i++;
            continue;
        }
        if(v1[i]<v2[j])
        {
            result.push_back(v1[i]);
            i++;
        }
        else{
            result.push_back(v2[j]);
            j++;
        }
    }
    return result;
}
int main()
{
    vector<int>v1={1,5,8};
    vector<int>v2={2,3,4,6};
    vector<int>result;
    result=mergeSorted(v1,v2);
    for(int i:result)
    {
        cout<<i<<endl;
    }
    // cout<<result.size();

}
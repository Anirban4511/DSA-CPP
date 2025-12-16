#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>findDfs(vector<int>adj[],vector<int>&visited,int node,vector<int>&result)
{
    for(int i=0;i<adj[node].size();i++)
    {
        if(visited[adj[node][i]]==0)
        {
            result.push_back(adj[node][i]);
            visited[adj[node][i]]=1;
            findDfs(adj,visited,adj[node][i],result);
        }
    }
    return result;
}
int main(){
    int n,m;
    cout<<"Enter the total nodes and edges - "<<endl;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    vector<int>result;
    result.push_back(1);
    visited[1]=1;
    result=findDfs(adj,visited,1,result);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";

    }
}
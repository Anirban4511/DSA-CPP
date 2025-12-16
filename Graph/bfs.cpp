#include<iostream>
#include<vector>
#include<queue>
using namespace std;
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
    queue<int>q;
    q.push(1);
    visited[1]=1;
    vector<int>result;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        result.push_back(node);
        for(int i=0;i<adj[node].size();i++)
        {
            if(visited[adj[node][i]]!=1)
            {
                visited[adj[node][i]]=1;
                q.push(adj[node][i]);
            }
        }
    }
//printing the result vector contains the bfs nodes
for(int i=0;i<result.size();i++)
{
    cout<<result[i]<<" ";
}

}
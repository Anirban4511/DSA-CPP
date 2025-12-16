#include<bits/stdc++.h>
using namespace std;
vector<int>bfsOfGraph(int n,vector<int>adj[])
{
   vector<int> vis(n + 1, 0);
    vis[3]=1;
    queue<int>q;
    q.push(3);
    vector<int>bfs;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(int i=0;i<adj[node].size();i++)
        {
            if(vis[adj[node][i]]!=1)
            {
                q.push(adj[node][i]);
                vis[adj[node][i]]=1;
            }
        }
    }
    return bfs;

}
int main()
{
       int n, m;

    cin >> n >> m;
        vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>result=bfsOfGraph(n,adj);
    //printing the result for bfs traversal
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<< " ";
    }
}
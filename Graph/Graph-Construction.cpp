#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //taking the input of the nodes and edges in the graph
    int n,m;
    cin>>n>>m;
    //declaring an array 
    vector<vector<int>>adj(n+1);
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u][v].push_back=1;
        adj[v][u]=1;
    }

    //printing the matrix 
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<adj[i][j];
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)

void dfs(int node,vector<int> &visited,vector<int> adj[]){
    cout<<node<<" ";
    visited[node]=1;
    loop(i,0,adj[node].size()){
        int it=adj[node][i];
        if(visited[it]==0){
            dfs(it,visited,adj);
        }
    }
}

void printDFS(vector<int> adj[],int n){
    vector<int> visited(n+2,0);
    loop(i,1,n+1){
        if(visited[i]==0){
            dfs(i,visited,adj);
        }
    }
}





int main(){

    cout<<"Number of nodes: ";int n;cin>>n;
    cout<<"Number of edges: ";int ed;cin>>ed;
    vector<int> adj[n+2];
    loop(i,0,ed){
        cout<<"Edge(Start,End)- "<<i+1<<" : ";
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    printDFS(adj,n);
    cout<<endl;




    return 0;
}
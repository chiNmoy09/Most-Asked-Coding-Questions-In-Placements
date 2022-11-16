#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)

/*
struct graph{
    int node;
    vector<int> edges;
};*/


void approxCover(vector<int> adj[],int n,int ed){

    int visited[n+1];
    loop(i,0,n+1){
        visited[i]=0;
    }

    loop(u,0,n){
        if(visited[u]==0){
            loop(i,0,adj[u].size()){
                int v=adj[u][i];
                if(visited[v]==0){
                    visited[u]=1;
                    visited[v]=1;
                    break;
                }
            }
        }
    }

    loop(i,0,n){
        if(visited[i]==1){
            cout<<i<<" ";
        }
    }cout<<endl;


}
/*
bool comp(graph g1,graph g2){
    return g1.edges.size() >= g2.edges.size();
}


void optimalCover(vector<int> adj[],int ind,int n){

    struct graph g[n+1];
    loop(i,ind,n+ind){
        g[i].node=i;
        g[i].edges=adj[i];
    }

    sort(g,g+n,comp);
    int visited[n+1]; 
    loop(i,0,n+1){
        visited[i]=0;
    }
    loop(i,0,n){
        cout<<g[i].node<<" ";
    }


    loop(i,ind,n){
        if(visited[i]==0){
            loop(j,0,g[i].edges.size()){
                visited[i]=1;
                int x=g[i].edges[j];
                visited[x]=1;
            }
            cout<<g[i].node<<" ";
        }
    }cout<<endl;



}*/





int main(){

    cout<<"Number of elements: ";int n;cin>>n;
    vector <int> adj[n+1];
    cout<<"Number of edges: ";int ed;cin>>ed;

    loop(i,0,ed){
        cout<<"Edge(Start,End)- "<<i+1<<" : ";
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //cout<<"Starting Index(0/1): ";int ind;cin>>ind;
    cout<<"Approximate Vertex Cover: \n";
    approxCover(adj,n,ed);
    //cout<<"Optimal Vertex Cover: \n";
    //optimalCover(adj,ind,n);



    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)


vector<int> shortestDist(int v,vector<vector<int>> adj[],int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(v);
    for(int i=0;i<v;i++){
        dist[i]=1e9;
    }

    dist[s]=0;
    pq.push({0,s});

    while(!pq.empty()){
        int d=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node]){
            int adjNode=it[0];
            int edgeWt=it[1];

            if(d+edgeWt < dist[adjNode]){
                dist[adjNode]=d+edgeWt;
                pq.push({dist[adjNode],adjNode});
            }
        }

    }

    return dist;


}



int main(){

    cout<<"Number of nodes: ";int v;cin>>v;
    cout<<"Number of edges: ";int ed;cin>>ed;
    vector<vector<int>> adj[v];//0,1,2,3....(v-1)
    loop(i,0,ed){
        cout<<"Start: ";int u;cin>>u;
        cout<<"End: ";int v;cin>>v;
        cout<<"Weight: ";int wt;cin>>wt;
        vector<int> temp1,temp2;
        temp1.push_back(v);
        temp1.push_back(wt);
        adj[u].push_back(temp1);
        temp2.push_back(u);
        temp2.push_back(wt);
        adj[v].push_back(temp2);

    }

    cout<<"Source: ";int s;cin>>s;
    vector<int> dist=shortestDist(v,adj,s);

    cout<<"Shortest Disance from "<<s<<" : \n";
    loop(i,0,v){
        cout<<dist[i]<<" ";
    }cout<<endl;



    return 0;
}
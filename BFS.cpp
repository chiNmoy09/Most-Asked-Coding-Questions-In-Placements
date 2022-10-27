#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}


void bfsSearch(int n,int s,vector<int> adj[]){
    vector<int> ans;
    vector<int> visited(n+1,0);
    
    loop(i,s,n){
        if( !visited[i]){
            queue<int> q;
            q.push(i);
            visited[i]=1;

            while( !q.empty()){
                int node=q.front();
                q.pop();
                cout<<node<<" ";

                loop(i,0,adj[node].size()){
                    int it=adj[node][i];
                    if( !visited[it]){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
}



int main(){

    cout<<"Number of Nodes: ";int n;cin>>n;
    cout<<"Number Of Edges: ";int ed;cin>>ed;
    vector <int> adj[n+1];

    loop(i,0,ed){
        cout<<"Edge(Start,End): ";
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    cout<<"Start: ";int s;cin>>s;

    bfsSearch(n,s,adj);
    cout<<endl;


return 0;
}
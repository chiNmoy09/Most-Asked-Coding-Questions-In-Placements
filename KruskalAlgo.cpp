#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)

const int maxi=1e4;
int parent[maxi];
int Level[maxi];

struct graph{
    int v1;
    int v2;
    int weight;
};

void init(){
    loop(i,0,maxi){
        parent[i]=i;
        Level[i]=0;
    }
}

int findParent(int node){
    if(node==parent[node])
        return node;

    return parent[node]=findParent(parent[node]);
}


void myUnion(int u,int v){
    u=findParent(u);
    v=findParent(v);

    if(Level[u]<Level[v]){
        parent[u]=v;
    }else if(Level[u]>Level[v]){
        parent[v]=u;
    }else{
        parent[u]=v;
        Level[v]++;
    }
}


bool comp(struct graph v1,struct graph v2){
    return v1.weight<=v2.weight;
}


void kruskal(struct graph g[],int ed){
    sort(g,g+ed,comp);

    int minCost=0;

    cout<<"Tree Structure:\n";
    loop(i,0,ed){
        if(findParent(g[i].v1) != findParent(g[i].v2)){
            cout<<g[i].v1<<" "<<g[i].v2<<" "<<g[i].weight<<endl;
            minCost+=g[i].weight;
            myUnion(g[i].v1,g[i].v2);
        }
    }


    cout<<"Minimum Weight: "<<minCost<<endl;;

}



int main(){

    cout<<"Number of Edges: ";int ed;cin>>ed;

    struct graph g[ed];
    loop(i,0,ed){
        cout<<"Give the values(start, end, weight) for Edge-"<<i+1<<": ";
        cin>>g[i].v1;
        cin>>g[i].v2;
        cin>>g[i].weight;
    } 
    init();

    kruskal(g,ed);   


    return 0;
}
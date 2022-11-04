#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define MOD 1000000007
#define int long long



void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
            

            int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i].second;
    }
    int a,b;
    int ans=0;
    int x=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i].first<x)
        {

            x=v[i].first;
            a=i;
        }
    }
    x=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i].second<x)
        {

            x=v[i].second;
            b=i;
        }
    }
    for(int i=0;i<n;i++)
    {

        if(i!=a&&i!=b)
        {
            ans=(ans+min(v[a].first*v[i].second,v[b].second*v[i].first))%MOD;
        }
    }
    if(a!=b)
    ans=(ans+v[a].first*v[b].second)%MOD;
    cout<<ans<<endl;



    }

return 0;
}
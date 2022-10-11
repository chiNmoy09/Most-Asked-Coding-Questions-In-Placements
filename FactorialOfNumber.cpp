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

ll fact(ll n){
    if(n==0 || n==1) return 1;
    ll ans=1;
    loop(i,1,n+1){
        ans*=i;
    }
    return ans;
}


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        cout<<fact(n)<<endl;


    }

return 0;
}
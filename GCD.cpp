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

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        //cout<<gcd(a,b)<<endl;
        while(b!=0){
            int temp=a;
            a=b;
            b=temp%b;
        }cout<<a<<endl;



    }

return 0;
}
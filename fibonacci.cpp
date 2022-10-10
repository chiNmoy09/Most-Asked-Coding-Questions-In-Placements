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


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        int num;cin>>num;

        int a=0,b=1;
        int next=0;
        cout<<a<<endl<<b<<endl;

        loop(i,2,num){
            next=a+b;
            a=b,b=next;
            cout<<next<<endl;
        }


    }

return 0;
}
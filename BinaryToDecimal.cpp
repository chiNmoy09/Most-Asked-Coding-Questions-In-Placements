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
        
        string s;cin>>s;
        int sum=0,j=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                int p=pow(2,j);
                sum+=p;
            }j++;
            
        }

        cout<<sum<<endl;



    }

return 0;
}
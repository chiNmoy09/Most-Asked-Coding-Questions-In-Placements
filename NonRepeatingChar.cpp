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
        map<char,int> mp;
        loop(i,0,s.size()){
            mp[s[i]]++;
        }
        bool flag=false;
        for(auto it:mp){
            if(it.second ==1){
                flag=true;
                cout<<it.first<<" -> "<<it.second<<" ";
            }
        }
        if(!flag) cout<<"All are repeating\n";

        cout<<endl;
    }

return 0;
}
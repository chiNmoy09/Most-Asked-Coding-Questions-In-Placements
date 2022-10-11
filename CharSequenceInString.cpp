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
        //String Input
        string s;cin>>s;
        //Ordered Map stores Unique Keys(order wise), like: map<key,value> mp
        map<char,int> mp;
        //int freq[256]={0};
        loop(i,0,s.size()){
            mp[s[i]]++;
        }

        cout<<"Char Sequence:\n";
        for(auto it:mp){
            cout<<it.first<<" -> "<<it.second<<endl;
        }cout<<endl;


    }

return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define MOD 1000000007



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
        
        string s;
    cin>>s;
    int k;
    cin>>k;
    int ans=0;
    for(char c='a';c<='z';c++)
    {
        string a="";
        for(auto x:s)
        {
            if(x==c)
            {
                a+='1';
            }
            else
            {
                a+='0';
            }
        }
        int cnt0 = 0;
        int l = 0;
        int max_len = 0;
        for (int i = 0; i < s.size(); i++)
        {
           if (a[i]=='0')
             cnt0++;
           while(cnt0>k)
           {
             if (a[l]=='0')
                cnt0--;
             l++;
           }
           max_len = max(max_len, i - l + 1);
        }
        ans=max(ans,max_len);
    }
    cout<<ans<<endl;


    }

return 0;
}
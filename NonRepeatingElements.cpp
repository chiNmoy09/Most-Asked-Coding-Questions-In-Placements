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
        
        //Array Size
        int n;cin>>n;
        int a[n];
        //Array Elements
        loop(i,0,n){
            cin>>a[i];
        }
        int cnt=0;
        bool flag=false;
        int visited[n]={0};
        loop(i,0,n){
            if(visited[i]==0){
                cnt=1;
                loop(j,i+1,n){
                    if(a[i]==a[j]){
                        cnt++;
                        visited[j]=1;
                    }
                }
                if(cnt==1){
                    flag=true;
                    cout<<a[i]<<" ";
                }
            }
        }

        if(!flag){
            cout<<"None\n";
        }
        cout<<endl;


    }

return 0;
}
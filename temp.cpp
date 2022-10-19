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
        
        //int n;cin>>n;
        int n=9;
        int a[n][n]={ { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };;
        //int s;cin>>s;
        int s=0;
        loop(i,0,n){
            loop(j,0,n){
                if(a[i][j]==0 && i!=j){
                    a[i][j]=9999;
                }
            }
        }


        
        loop(k,0,n){
            loop(i,0,n){
                loop(j,0,n){
                if(a[i][k]+a[k][j] < a[i][j]){
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
        }



        loop(j,0,n){
            cout<<a[s][j]<<" ";
        }cout<<endl;


    }

return 0;
}
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
        //Array Eements
        loop(i,0,n){
            cin>>a[i];
        }

        int temp[n];
        loop(i,0,n){
            temp[i]=a[i];
        }
        sort(temp,temp+n);
        loop(i,0,n){
            loop(j,0,n){
                if(temp[j]==a[i]){
                    a[i]=j+1;
                    break;
                }
            }
        }

        //Print the Array
        loop(i,0,n){
            cout<<a[i]<<" ";
        }cout<<endl;



    }

return 0;
}
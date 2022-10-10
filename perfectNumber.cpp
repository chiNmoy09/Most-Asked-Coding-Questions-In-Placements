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
        //perfect number, a positive integer that is equal to the sum of its proper divisors
        //1+2+3=6, proper divisors of 6 are 1,2,3
        int n;cin>>n;
        int div=1,sum=0;
        loop(i,1,n/2 +1){
            div=n%i;
            if(div==0){
                sum+=i;
            }
        }
        (sum==n)? cout<<"Perfect Number\n":cout<<"Not a Perfect Number\n";



    }

return 0;
}
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

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        //Array Size
        int n;cin>>n;
        int a[n];
        loop(i,0,n){
            cin>>a[i];
        }

        //Bubble Sort Algo
        loop(i,0,n-1){
            loop(j,0,n-i-1){
                if(a[j] > a[j+1]){
                    //swap(a[j],a[j+1]);
                    //Use this swap function 
                    // Or use this:
                    a[j]=a[j]^a[j+1];
                    a[j+1]=a[j]^a[j+1];
                    a[j]=a[j]^a[j+1];
                }
            }
        }

        //Printing the Array Elements
        loop(i,0,n){
            cout<<a[i]<<" ";
        }cout<<endl;


    }

return 0;
}   
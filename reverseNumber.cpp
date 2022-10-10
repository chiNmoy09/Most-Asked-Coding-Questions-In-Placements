#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //Number of test cases
    int t;cin>>t;
    while(t--){
        //Integer input
        //cout<<"Give the number: ";
       int num;cin>>num;
       int rev=0;
       int rem=0;
       do{
        rem=num%10;
        rev=rev*10 +rem;
        num=num/10;
       }while(num!=0);

       cout<<"Reverse Number is: "<<rev<<endl;






    }

return 0;
}
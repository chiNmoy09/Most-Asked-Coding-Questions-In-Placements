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

bool isPalindrome(int n){
    int nn=n;
    
    int rev=0,rem=0;

    do{
        rem=n%10;
        rev=rev*10 +rem;
        n=n/10;
    }while(n!=0);

    if(rev==nn) return true;
    return false;


}


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        (isPalindrome(n))? cout<<"Palindrome\n":cout<<"Not Palindrome\n";


    }

return 0;
}
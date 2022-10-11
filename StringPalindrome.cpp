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

bool isPalindrome(string s){
    int n=s.size();
    int left=0,right=n-1;
    while(left<=right){
        if(s[left] != s[right]){
            return false;
        }
        left++,right--;
    }
    return true;
}


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        (isPalindrome(s))? cout<<"Palindrome\n":cout<<"Not Palindrome\n";


    }

return 0;
}
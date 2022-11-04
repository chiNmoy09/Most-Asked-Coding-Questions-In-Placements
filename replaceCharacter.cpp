/*


You have been given the string s (which consists of only uppercase English characters) and the integer k. 
You can replace any character in the string with another uppercase English character. 
This operation can be performed at most k times. After executing the preceding procedures, 
return the length of the longest substring containing the same letter." 

Sample input and output is shown below:

Input: s = "AABABBA", k = 1
Output: 4


*/
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

int replaceChar(string s,int k){
    int n=s.size();
    int maxLength=0,maxFreq=0,left=0;
    vector<int> freq(26);
    loop(r,0,n){
        int ascii=s[r]-'A';
        freq[ascii]++;
        maxFreq=max(maxFreq,freq[ascii]);
        while(r-left+1-maxFreq > k){
            freq[s[left]-'A']--;
            left++;
        }
        maxLength=max(maxLength,r-left+1);
    }
    return maxLength;
}



int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int k;cin>>k;

        cout<<replaceChar(s,k);



    }

return 0;
}
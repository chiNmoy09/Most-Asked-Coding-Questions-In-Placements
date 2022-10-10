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
        string s1,s2;cin>>s1>>s2;        

        int freq1[256]={0},freq2[256]={0};

        loop(i,0,s1.size()){
            int ind=(int)(s1[i]);
            freq1[ind]++;
        }
        loop(i,0,s2.size()){
            int ind=(int)(s2[i]);
            freq2[ind]++;
        }

        bool isAnagram=true;

        loop(i,0,256){
            if(freq2[i] != freq1[i]){
                isAnagram=false;
                break;
            }
        }

        (isAnagram)? cout<<"Anagram\n":cout<<"Not Anagram\n";



    }

return 0;
}
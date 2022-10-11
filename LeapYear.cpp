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

bool isLeapYear(int year){
    if((year%400 ==0) || (year%4==0 && year%100 !=0)) return true;

    return false;

}



int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int year;cin>>year;

        (isLeapYear(year))? cout<<"Leap Year\n":cout<<"Not Leap Year\n";


    }

return 0;
}
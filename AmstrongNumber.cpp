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


//Number Of digit
int noOfDigit(int n){
    int cnt=0;
    int nn=n;
    int rem=0;
    do{
        rem=n%10;
        n=n/10;
        cnt++;
    }while(n!=0);
    return cnt;
}


//pow(x,n) function
int myPow(int x,int n){
    int nn=n;
    int ans=1;
    while(nn){
        if(nn&1){
            ans=ans*x;
            nn=nn-1;
        }else{
            x=x*x;
            nn=nn/2;
        }
    }
    return ans;
}



bool isArmstrong(int num){
    int temp=num;
    int n=noOfDigit(num);
    int sum=0;
    int rem=0;

    do{
        rem=num%10;
        sum+=myPow(rem,n);//Anyone can use inbuild pow(x,n) function
        num=num/10;
    }while(num != 0);


    if(sum==temp) return true;
    return false;

}





int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        //Integer Input
        int n;cin>>n;
        (isArmstrong(n))? cout<<"Armstrong\n":cout<<"Not Armstrong\n";



    }

return 0;
}
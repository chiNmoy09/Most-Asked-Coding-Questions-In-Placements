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
        //Integer Input
        int n;cin>>n;
        /*
        
        An automorphic number is a number whose square has the 
        same digits in the end as the number itself. 
        For example, 25 is an automorphic number because 
        the square of 25 is 625, which ends with 25. Similarly, 
        76 is an automorphic number because the square of 76 is 5776, 
        which again ends with 76

        */

        int digit=countDigit(n);

        int square=n*n;
        int r1=0,r2=0;
        bool flag=true;

        do{
            r1=n%10;//this will give the last digit of n
            r2=square%10;//this will give the last digit of square

             // here we are checking the digit from right to left between two number
            // ex: in between 76 and 5776, first we will check right most 6 is equal, then 2nd right 7 is equal   
            if(r1 != r2){   
                flag=false;
                break;
            }

            n=n/10;
            square=square/10;
        }while(n!=0);


        (flag)? cout<<"Automorphic\n":cout<<"Not Automorphic\n";



    }

return 0;
}
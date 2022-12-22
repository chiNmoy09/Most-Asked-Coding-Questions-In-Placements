/* Given an integer n, 
return the number of prime numbers 
that are strictly less than n. */

// Problem Link: https://leetcode.com/problems/count-primes/description/

#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
        if(n==0 || n==1) 
            return 0;

        int isPrime[n+1];
        for(int i=0;i<=n;i++){
            isPrime[i]=0;
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(isPrime[i]==0){
                count++;

                for(int j=2;i*j<n;j++){
                    isPrime[i*j]=1;
            }
            }

            
        }
        
        return count;
}

int main(){


    cout<<"Give an (+ve) Int: ";int n;cin>>n;
    cout<<"The number of prime numbers that are strictly less than "<<n<<" : "<<countPrimes(n)<<endl;


    return 0;
}
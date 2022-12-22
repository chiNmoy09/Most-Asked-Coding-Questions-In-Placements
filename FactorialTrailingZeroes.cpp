/* Given an integer n, return the number of trailing zeroes in n!. */

// Problem Link: https://leetcode.com/problems/factorial-trailing-zeroes/description/

#include<bits/stdc++.h>
using namespace std;


int trailingZeroes(int n) {
    
    int cnt=0;
    
    for (int i = 5; n/i >= 1; i=i*5){
        cnt += n/i;
    }
            
    return cnt;
}



int main(){

    
    cout<<"Give an (+ve) Int: ";int n;cin>>n;
    cout<<"Number Of Trailing Zeroes: "<<trailingZeroes(n)<<endl;


    return 0;
}
// Problem Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/


/*   

You have n boxes. You are given a binary string boxes of length n,
 where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.

In one operation, you can move one ball from a box to an adjacent box.
Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, 
there may be more than one ball in some boxes.

Return an array answer of size n, where answer[i] is 
the minimum number of operations needed to move all the balls to the ith box.

Each answer[i] is calculated considering the initial state of the boxes.


*/


#include<bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes) {

    int n=boxes.size();

    vector<int> pre(n,0);
    vector<int> preOne(n,0);
        
    for(int i=1;i<n;i++){
        preOne[i]= (boxes[i-1]=='1')? preOne[i-1]+1:preOne[i-1];
    
        pre[i]=preOne[i]+pre[i-1];
    }


    vector<int> post(n,0);
    vector<int> postOne(n,0);
        
    for(int i=n-2;i>=0;i--){
        postOne[i]= (boxes[i+1]=='1')? postOne[i+1]+1:postOne[i+1];
            
        post[i]=postOne[i]+post[i+1];
    }

       
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=pre[i]+post[i];
    }

    return ans;
}


int main(){
    cout<<"Binary String: ";string s;cin>>s;

    vector<int> ans=minOperations(s);
    cout<<"Ans:\n";
    for(auto it:ans){
        cout<<it<<" ";
    }cout<<endl;


    return 0;
}
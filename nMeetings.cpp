#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

struct meeting{
    int people;
    int start;
    int end;
    int pos;
};

//comparator
bool static comp(meeting m1,meeting m2){
    if(m1.end < m2.end)
        return true;
    else if(m1.end > m2.end)
        return false;
    else if(m1.pos < m2.pos)
        return true;
    return false;
}

// Time Complexity: O(n log n)
// Space Complexity: O(n)
int maxMeetings(int p[],int s[],int e[],int n){
    struct meeting meet[n];
    for(int i=0;i<n;i++){
        meet[i].people=p[i];
        meet[i].start=s[i];
        meet[i].end=e[i];
        meet[i].pos=i+1;
    }
    sort(meet,meet+n,comp);
    vector<int> ans;
    int limit=meet[0].end;
    ans.push_back(meet[0].pos);
    int sum=0;
    for(int i=1;i<n;i++){
        if(meet[i].start > limit){
            limit=meet[i].end;
            //ans.push_back(meet[i].pos);
        }else{
            sum+=meet[i].people;
        }
    }

    // cout<<"The order in which the meetings will be performed is: "<<endl;
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
    


    //return ans.size();
    return sum;
}

int solve(int n,int people[],int start[],int end[]){
    return maxMeetings(people,start,end,n);
}



int main(){

    //cout<<"Number of meetings: ";
    int n;cin>>n;
    int people[n];
    loop(i,0,n){
        cin>>people[i];
    }
    //cout<<"Starting time: \n";
    int start[n];
    for(int i=0;i<n;i++){
        cin>>start[i];
    }

    //cout<<"Ending time:\n";
    int end[n];
    for(int i=0;i<n;i++){
        cin>>end[i];
    }

    cout<<solve(n,people,start,end)<<endl;
    //cout<<endl;




    return 0;
}
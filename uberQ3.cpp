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


int dp[101][31][31][31];
int fun(int n , int p , int q , int r , vector<int>&arr)
{
    if(n < 0)
    {
        if(p == 0 && q == 0 && r == 0)
        {
            return 0;
        }
        return -1e9;
    }
    if(p == 0 && q == 0 && r == 0)
    {
        int sum = 0;
        for(int i = 0 ; i <= n ; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
    if(dp[n][p][q][r] != -1e9)
    {
        return dp[n][p][q][r];
    }
    int ans = arr[n] + fun(n - 1 , p , q , r , arr);
    if(p > 0 && n >= 0)
    {
        ans = max(ans , fun(n - 1 , p - 1 , q , r , arr));
    }
    if(q > 0 && n >= 1)
    {
        ans = max(ans , fun(n - 2 , p , q - 1 , r , arr));
    }
    if(r > 0 && n >= 2)
    {
        ans = max(ans , fun(n - 3 , p , q , r - 1 , arr));
    }
    return dp[n][p][q][r] = ans;
}
int solution(vector<int>&arr , int p , int q , int r)
{
    int n = arr.size();
    for(int i = 0 ; i <= 100 ; i++)
    {
        for(int j = 0 ; j <= 30 ; j++)
        {
            for(int k = 0 ; k <= 30 ; k++)
            {
                for(int l = 0 ; l <= 30 ; l++)
                {
                    dp[i][j][k][l] = -1e9;
                }
            }
        }
    }
    int ans = fun(n - 1 , p , q , r, arr);
    return ans;
}




int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        



    }

return 0;
}
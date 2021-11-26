#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)





#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
const int N = 1e6+2;
const int MOD = 1e9+7;
vector<vector<int>> dp(1000,vector<int> (1000,INT_MAX));

int ans(vector<vector<int>> grid, int n, int m){
    if(grid[0][0]==1) return 0;
    if(n==0 and m==0) return 1;

    if(n==0){
        if(grid[n][m]==0) return ans(grid,n,m-1)%MOD;
        else return 0;
    }
    if(m==0){
        if(grid[n][m]==0) return ans(grid,n-1,m)%MOD;
        else return 0;
    }


    if(dp[n][m]!=INT_MAX) return (dp[n][m])%MOD;

    if(grid[n][m]==0){
        dp[n][m] = ((ans(grid,n-1,m))%MOD + (ans(grid,n,m-1))%MOD)%MOD;
    }
    else{
        dp[n][m]=0;
    }
    


    return dp[n][m];

}



int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector <int> grid(n, vector<int> (n));

    loop(i,0,n) loop(j,0,n) cin >> grid[i][j];

    //loop(i,0,n){ loop(j,0,n) cout << grid[i][j]; cout<<endl; }

    cout << ans(grid,n-1,n-1);


    
    return 0;
}

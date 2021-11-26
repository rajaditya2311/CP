#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;

ll dp[1001][1001];




int findans(ll n, ll m){

    if(n==1 and m==1) return 0;

    if(n==1 || m==1) return 1; 

    if(dp[n][m]!=-1) return dp[n][m];

    dp[n][m] = findans(n-1,m) + findans(n,m-1); 
    return dp[n][m];
}




int main(){
    
    ll n,m; cin >> n >> m;
    loop(i,0,1001) loop(j,0,1001) dp[i][j]=-1;
    cout<<findans(n,m);
    
    


    
    return 0;
}

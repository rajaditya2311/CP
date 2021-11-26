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
vi dp(N,-1);

vector <vector<int>> a(3, vector<int> (N,0));

ll ans(ll n, ll k1, ll k2){

    if(n==1){
        return max(a[k1][0],a[k2][0]);
    }
        

    if(dp[n]!=-1) return dp[n];


    dp[n] = max(ans(n-1,k1,k2)+a[3-k1-k2][n],max(ans(n-1,k1,k2)+a[3-k1-k2][n],ans(n-1,k1,k2)+a[3-k1-k2][n]));

    return dp[n];
}    



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    
    loop(i,0,n) cin >> a[0][i] >> a[1][i] >> a[2][i];

    //loop(i,0,n) cout<< a[0][i] <<" "<<a[1][i] <<" "<< a[2][i]<<endl;

    

    cout << max(ans(n-1,1,3),max(ans(n-1,1,2),ans(n-1,2,3)));
    


    
}

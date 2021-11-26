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
vi dp(N,INT_MAX);

vi a;

ll ans(ll n){
    
    if(n<=3) return a[n];

    if(dp[n]!=INT_MAX) return dp[n];

    dp[n] = min(ans(n-1)+a[n], min(ans(n-2)+a[n],ans(n-3)+a[n]));
    //cout << dp[n]<<" ";

    return dp[n];

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    a.resize(n+1);
    loop(i,1,n+1) cin >> a[i];
    cout << endl;
    cout << min(ans(n),min(ans(n-1),ans(n-2)));


    
    return 0;
}

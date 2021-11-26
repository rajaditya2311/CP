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

vi dp(N,0);



ll ans(ll n){

    if(n<=6){
        dp[n] = pow(2,n-1);
        return dp[n];
    }
        


    
    if(dp[n]!=0)
        return dp[n];

    for(int i=6; i>0; i--){
        dp[n] = ((dp[n])%MOD + (ans(n-i))%MOD)%MOD; 
    }
    return dp[n];

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll n;
    cin >> n;
    cout<<ans(n);

    return 0;
}

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
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<ll>ans(n,0);
    loop(i,0,n){
        cin>>ans[i];
    }
    vector<ll>dp(k+1,0);
    dp[0]=1;
    /*loop(i,1,n+1){
        loop(j,0,k+1){
            if(j-ans[i-1]>=0){
                dp[j]= ((dp[j])%MOD+(dp[j-ans[i-1]])%MOD)%MOD;
            }
        }
    }*/
    loop(j,0,k+1){
        loop(i,1,n+1){
            if(j-ans[i-1]>=0){
                dp[j] = ((dp[j])%MOD + (dp[j-ans[i-1]])%MOD)%MOD;
            }
        }
    }
    
        cout<<dp[k]<<endl;
    
    

    
    return 0;
}

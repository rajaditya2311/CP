#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;



    
    cin >> n >> k;

    vector<ll> a(n+1);
    
    loop(i,1,n+1){
        cin >> a[i];
    }

    vector<ll> dp(n+5,INT_MAX);
    dp[1]=0;

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=min(n,i+k); j++){
            dp[j] = min(dp[j], llabs(a[i]-a[j])+dp[i]);
        }
    }
    cout<<dp[n];
    
    






    return 0;
}

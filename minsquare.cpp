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
const long long int MOD = 1e9+7;
const long long int N = 1e5+2;

ll dp[N];
ll minsquare(ll n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;

    }
    if(dp[n]!=MOD)
        return dp[n];

    
    for(int i=1; i*i<=n; i++){
        dp[n] = min(dp[n], minsquare(n-(i*i))+1);

    }
    

    return dp[n];




}




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    loop(i,0,N){
        dp[i]=MOD;
    }

    cout<<minsquare(n)<<endl;



    return 0;
}

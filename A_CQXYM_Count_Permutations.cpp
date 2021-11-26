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
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
vi dp(N,0);


void factorial(int N)
{
    const unsigned int M = 1000000007;
    dp[1]=1;
    dp[2]=1;
    unsigned long long f = 1;
    for (int i = 3; i < N; i++)
        dp[i] = (dp[i-1]*i) % M;  
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    factorial(N);

    ll t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        cout << dp[2*n]<<endl;
        
        
    }
    return 0;
}

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


    ll t;
    cin >> t;
    while (t--){
        ll n; string s; cin >> n >> s;
        string t = s;
        ll ans=0;

        sort(t.begin(),t.end());
        loop(i,0,n) if(s[i]!=t[i]) ans++;
        cout<<ans<<endl;
        
    }
    return 0;
}

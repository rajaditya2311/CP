#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define POB pop_back
#define mp make_pair
const long long int mod = 1000000007;
ll powm(ll x, ll y){
    if(y==0)
        return 1;
    if(y%2==0){
        ll ans= powm(x,y/2);
        ans = (ans%mod*ans%mod)%mod;
        
        return ans;
    }
    else{
        ll ans= powm(x,y/2);
        ans = (ans%mod*ans%mod)%mod;
        ans = (ans%mod)*x%mod;
        return ans;
    }    
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t;
cin >> t;
while (t--){
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll k = powm(2,n)-1;
    ll c = powm(k,m);
    cout<<c <<endl;
}
return 0;
}

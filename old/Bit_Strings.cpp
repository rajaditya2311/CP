#include<bits/stdc++.h>
using namespace std;


typedef long long int ll;
const ll mod = 1000000007;

long long int expo(ll a, ll n){
    if(n==0)
        return 1;
    if(n%2==0){
        ll k = expo(a,n/2);
        ll p = (k*k)%mod;
        return p;
    }
    else{
        ll k = expo(a,n/2);
        ll p = (k*k)%mod;
        p= (p*a)%mod;
        return p;
    }    
}
int main(){
    ll n;
    cin >> n;
    ll ans = expo(2,n);
    cout<<ans;
}
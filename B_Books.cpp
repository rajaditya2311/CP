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
ll n,t;
vi sum;

bool good(ll m, vi a,ll t, ll n ){

    loop(i,1,n+1-m){
        if(sum[i+m]-sum[i-1]<=t)
            return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> n >> t;
    vi a(n+1);
    sum.resize(n+1,0);
    loop(i,1,n+1){
        cin >> a[i];
        sum[i] = sum[i-1]+a[i];
    }

    ll l=-1; ll r=n;

    while(r>l+1){
        ll m = (l+r)/2;

        if(good(m,a,t,n)){
            l=m;
        }
        else{
            r=m;
        }
    }
    if(n==1){
        if(a[1]>t){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    else{
        cout <<r;

    }   
    


    
    return 0;
}

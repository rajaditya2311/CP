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
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,q; cin >> n >> q;

    vi a(n);
    loop(i,0,n) cin >> a[i];

    vi b(n+1,0);

    while(q--){
        ll l,r;
        cin >> l >> r;

        b[l-1]+=1;
        b[r]-=1;


    }
    b[n] = INT_MAX;
    for (int i = 1; i < n; ++i){
        b[i] += b[i - 1];
    }

    

    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    
    ll sum =0;

    for(int i=n-1; i>=0; i--){
        sum += a[i]*b[i];
    }
    cout << sum <<endl;
	
    


    
    return 0;
}

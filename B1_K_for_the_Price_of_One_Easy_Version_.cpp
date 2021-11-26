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
vi a;




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n,p,k; cin >> n >> p >> k;
        a.resize(n);
        loop(i,0,n) cin >> a[i];
        sort(a.begin(),a.end());

        ll cnt=0;
        ll cnt2=1;
        ll p1=p;
        p1=p1-a[0];
        
        for(int i=1; i<n; i+=2){
            if(p1-a[i]>=0){
                p = p-a[i];
                cnt2+=2;
            }
        }
        for(int i=1; i<n; i+=2){
            if(p-a[i]>=0){
                p=p-a[i];
                cnt+=2;
            }
        }

        cout << max(cnt,cnt2)<<endl;


    }
    return 0;
}

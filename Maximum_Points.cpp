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


    ll t;
    cin >> t;
    while (t--){
        ll a,b,c,x,y,z;
        cin >> a >> b >> c >> x >> y >> z;
        ll ans = INT_MIN;


        loop(i,0,21){
            loop(j,0,21){
                loop(k,0,21){
                    if((i*a + b*j + c*k) <=240){
                        ll ptr = (i*x)+(j*y)+(z*k);
                        ans = max(ans,ptr);
                    }
                }
            }
        }
        cout << ans<<endl;

    }
    return 0;
}

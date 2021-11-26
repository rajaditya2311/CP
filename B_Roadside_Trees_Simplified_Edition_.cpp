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


    
    
        ll n;
        cin >> n;
        vi h(n);
        loop(i,0,n)
            cin >> h[i];
        ll ans=n+h[0];
        //ans+= h[0];

        loop(i,1,n){
           ans+= llabs(h[i]-h[i-1]) + 1;
        }
        
        cout<<ans<<endl;

    
    return 0;
}

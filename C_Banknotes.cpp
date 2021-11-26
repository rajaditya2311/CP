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
        ll n,k;
        cin >> n >> k;


        if(n==1){
            cout << 0 << endl;
        }
        else if(n==2){
            cout << 1 << endl;
        }
        else if(k==1){
            cout << n-k<<endl;
        }
        else{
            ll power=1;
            ll cntr=0;
            while(power<k){
                power=power*2;
                cntr++;
            }
            ll ans = (n-power+k-1)/k;
            ll final = cntr+ans;
            cout<<final<<endl;
        }
    }
    return 0;
}

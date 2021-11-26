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

    ll n; cin >> n;
    string str; cin >> str;
    vi cnt(3,0);
    loop(i,0,n) cnt[str[i]-'1']++;

    ll ans = cnt[0]*cnt[1]*cnt[2];
    ll cnter=0;

    loop(i,0,n){
        int j=1;
        while((i+2*j)<n){
            if(str[i]!=str[i+j] and str[i+2*j]!=str[i] and str[i+j]!=str[i+2*j]){
                cnter++;

            }
            j++;
        }
            
        
    }
    cout <<ans-cnter<<endl;

    
    return 0;
}

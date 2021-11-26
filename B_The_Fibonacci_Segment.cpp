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
    ll n;
    cin >> n;
    vi a(n);
    loop(i,0,n) cin >> a[i];

    ll maxlen = INT_MIN;
    ll s=0;
    bool flag=false;
    if(n>2){
                loop(i,2,n){
            if(a[i]==(a[i-1]+a[i-2])){
                s++;
                flag=true;
            }
            else if(flag){
                maxlen = max(maxlen,s+2);
                s=0;
                flag=false;
            }
        }
        if(flag){
            maxlen = max(maxlen,s+2);
                s=0;
                flag=false;
            
        }
        maxlen = max(maxlen,ll(2));
    }
    else{
        maxlen = n;
    }
    cout <<maxlen;
    


    
    return 0;
}

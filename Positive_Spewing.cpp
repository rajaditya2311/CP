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
vi a;
void findans(ll n){
    vi sufsum(n,1);
    loop(i,0,n){
        if(a[i]!=0) sufsum[i]=0;
    }
    int i=n-1;
    while(i>=0){
        if(sufsum[i]==0){
            while(sufsum[--i]!=0){
                sufsum[i] = sufsum[i+1]+1;
            }
        }
        i--;
    }
    loop(i,0,n){
        cout<<sufsum[i]<<" ";
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        a.resize(n); loop(i,0,n) cin >> a[i];
        findans(n);

        



    }
    return 0;
}

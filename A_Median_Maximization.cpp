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


    ll t;
    cin >> t;
    while (t--){
        ll n,s; cin >> n >> s;
        if(n%2==0){
            ll ans = n-((n/2)-1);
            ll ptr = s/ans;
            cout<<ptr<<endl;


        } 
        else{
            ll ans = n - (n/2);
            ll ptr = s/ans;
            cout<<ptr<<endl;
        }



    }
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define POB pop_back
#define mp make_pair
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n,k;
        cin >> n >>k;
        ll maxm = INT_MIN;
        for(ll i=1; i<=k; i++){
            maxm = max(maxm, n%k);
        }
        cout<<maxm<<endl;

    }
    return 0;
}

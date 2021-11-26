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
        ll n;
        cin >> n;
        ll a[n];
        ll mini = INT_MAX;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            mini = min(mini,a[i]);
        }
        cout<<mini*(n-1)<<endl;

    }
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main(){
    
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll mini=INT_MAX;
        for(ll i=0; i<n-1; i++){
            mini = min(a[i+1]-a[i],mini );
        }
        cout<<mini<<endl;
    }
    return 0;
}

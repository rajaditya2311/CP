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
        cin >>n;
        ll a[n];
        ll maxx=INT_MIN;
        ll maxidx=0;
        ll minn=INT_MAX;
        ll minidx=0;

        for(ll i=0; i<n; i++){
            cin >> a[i];
            if( a[i]>maxx){
                maxx=a[i];
                maxidx=i;
            }
            if(a[i]<minn){
                minn=a[i];
                minidx=i;
            }
        }
        ll a1= max(maxidx,minidx) +1;
        ll a2 = n - min(maxidx,minidx);
        ll a3 = min( maxidx , minidx)+1 + n - max(maxidx,minidx);
        ll act = min(a1,min(a2,a3));
        cout<<act<<endl;

    }
    return 0;
}

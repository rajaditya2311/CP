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

ll find(ll a[],ll n,ll x)
{
    ll l = 0, r = n-1;
    ll k = 0;
 
    while (l < r)
    {
        
        if (a[l] + a[r] < x)
        {
            k += (r - l);
            l++;
        }
 
        
        else
            r--;
    }
 
    return k;
}






int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n,l,r;
        cin >> n >> l >>r;

        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll mini= find(a,n,l);
        ll maxi= find(a,n,r+1);
        ll total = maxi-mini;
        
        cout<<total<<endl;


    }
    return 0;
}

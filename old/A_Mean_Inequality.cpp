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
        ll a[2*n];
        ll b[2*n];
        for(ll i=0; i<2*n; i++){
            cin >> a[i];
        }
        sort(a,a+2*n);
        for(ll i=0; i<n; i++){
            b[2*i] = a[i];
            b[2*i+1] = a[n+i]; 
        }

        for(ll k=0; k<2*n; k++){
            cout<<b[k]<<" ";
        }
        cout << endl;
        

    }
    return 0;
}

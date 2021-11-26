#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll n,x;
    cin >> n >> x;
    ll w[n];
    for(ll i=0; i<n; i++){
        cin >> w[i];
    }
    sort(w,w+n);
    ll pos=0;
    ll k = x-w[n-1];
    for(int i=0; i<n; i++){
        if(w[i]>=k){
             pos =i;
            break;
        }
    }
    ll y = n - pos -2;
    cout << max(y,n/2) << endl;

}
return 0;
}

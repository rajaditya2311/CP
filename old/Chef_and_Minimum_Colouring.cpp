#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    ll mint = 100000000000;
   
        for(int i=0; i<=n-k; i++){
            mint = min(mint,a[k-1+i]-a[i]);
        }
        cout <<mint << endl;
    
        
    
}
return 0;
}

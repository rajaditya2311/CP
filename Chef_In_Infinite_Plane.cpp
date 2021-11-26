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
        vector<ll> a(n);
        vector<int> cnt(1e5+1,0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int distinct=0;
        for(int i=0; i<=1e5; i++){
            if(cnt[i]>0){
                distinct += min(cnt[i],i/2);
            }
        }
        cout<<distinct<<endl;

    }
    return 0;
}

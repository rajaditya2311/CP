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
    ll q,n;
    cin >>n >> q;
    std::vector<int> vec(100000);
    std::iota(vec.begin(), vec.end(), 0);
    ll a[n];
    vec.erase(vec.begin());
    for(ll i=0; i<n; i++){
        cin >> a[i];
        vec.erase(vec.begin()+a[i]);
    }
    while (q--){
        ll k;
        cin >> k;
        cout<<vec[k-1]<<endl;


    }
    return 0;
}

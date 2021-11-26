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
        ll k;
        cin >> k;
        ll x = ceil(sqrt(k));
        ll y  = x*x;
        ll dif = y - k;
        ll ansx;
        ll ansy;
        if(dif> x-1){
            dif = dif - (x-1);
            ansx = x;
            ansy = x - dif;
            cout<<ansy<<" "<<ansx<<endl;
        }
        else if(dif <= x-1){
            ansy = x;
            ansx = dif;
            cout<<ansy<<" "<<ansx+1<<endl;
        }
        
        


    }
    return 0;
}

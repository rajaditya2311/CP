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
        ll l,r;
        cin >> l >> r;
        if(2*l <= r){
            cout<< r%((r/2)+1)<<endl;
        }
        else{
            cout<<r%l<<endl;
        }
    }
    return 0;
}

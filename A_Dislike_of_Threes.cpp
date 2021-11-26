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



vector<ll> a(100001,0);

void findk(){
    ll k=0;
    for(int i=1; i<10000; i++){
        if(i%3!=0 and i%10!=3){
            a[k++]=i;
        }
    }
}
int main(){
    findk();
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll k;
        cin >> k;
        cout<<a[k-1]<<endl;
    }
    return 0;
}

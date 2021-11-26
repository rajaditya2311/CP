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
        
        ll a[n];
        ll v[1001]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            v[a[i]]++;
        }

        vector<ll> p;
        for(int i=0; i<=1000; i++){
            if(v[i]>=2)
                p.push_back(i);
        }
        if(p.size()<2){
            cout<<-1<<endl;
        }
        else{
            cout<<p[p.size()-1]*p[p.size()-2]<<endl;
        }
    }
    return 0;
}

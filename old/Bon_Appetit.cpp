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

bool sortbyfirst(const pair<ll,pair<ll,ll>> &a,const pair<ll,pair<ll,ll>> &b){
       if(a.first==b.first){
           return (a.second.second<b.second.second);
       }
       
       return (a.first<b.first);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n,k;
        cin >> n >> k;
        pair < ll , pair<ll,ll> > p[n];
        vector<pair<ll,pair<ll,ll>>> v;
        for(ll i=0; i<n; i++){
            cin >> p[i].s.f >>p[i].s.s >>p[i].f;
            v.push_back(p[i]);
        }

        sort(v.begin(),v.end(),sortbyfirst);
        
        ll cnt=0;
        for(ll i=0; i<v.size(); i++){
            
            if(v[i].s.s<=v[i+1].s.f && v[i].f == v[i+1].f){
                cnt++;
                continue;
            }
            if(v[i].f!=v[i+1].f){
                cnt++;
                continue;
            }
        }
        cout<<cnt<<endl;


        
    }
    return 0;
}

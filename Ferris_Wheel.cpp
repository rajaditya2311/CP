#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<ll> w;
ll n,x;

bool good(ll m){

    if(2*m <n){
        return false;
    }
    vector<pair<ll,ll>> p(m);
    for(ll i=0; i<m; i++){
        p[i].first = w[i];
    }

    int j = m-1;

    for(int i=m; i<n; i++){
        if(p[j].first + w[i] >x){
            return false;
        }
        else{
            j--;
        }
    }

    return true;

    


}



int main(){


    
    cin >> n >> x;
    w.resize(n);
    
    for(int i=0; i<n; i++){
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    reverse(w.begin(),w.end());

    ll l =0;
    ll r = n;

    while(r>l+1){
        ll m = (r+l)/2;

        if(good(m)){
            r=m;
        }
        else{
            l=m;
        }
    }

    cout<<r;

    




}
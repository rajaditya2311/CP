#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll k;
        cin >>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll sum=0;
    ll coins=0,totsum=0;
    for(auto it:v){
        totsum+=it;
    }
    
    for(ll k=n-1; k>=0; k--){
        sum+=v[k];
        coins++;
        if(sum>totsum/2)
            break;
    }
    cout<<coins;
}
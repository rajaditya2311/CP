#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll l,b;
    ll n;
    cin >> l >> b;
    cin >> n;
    pair<ll,ll> a[n];
    for(int i=0; i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    ll sum1=0,sum2=0;
    for(int i=0; i<n; i++){
        sum1 += (a[i].first/l)*(a[i].second/b);
    }
    for(int i=0; i<n; i++){
        sum2 += (a[i].first/b)*(a[i].second/l);
    }
    cout<<max(sum1,sum2);

}
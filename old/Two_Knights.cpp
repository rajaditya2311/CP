#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin >> n;

    for(ll k=1; k<=n; k++){

        ll l = ((k*k)*((k*k)-1))/2;
        ll m = 8*((k-2)*(k-1))/2;
        ll c = l-m;
        cout<<c<<endl;
    }
}
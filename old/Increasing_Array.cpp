#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll a[n];
    cin >>a[0];
    ll moves=0;
    for(int i=1; i<n; i++){
        cin >> a[i];
        if(a[i]<a[i-1]){
            moves+= a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout<<moves;
    
}
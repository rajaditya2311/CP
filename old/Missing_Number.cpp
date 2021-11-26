#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    vector<bool> v(n,false);
    ll a[n-1];
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        v[a[i]-1]=true;
    }
    for(int i=0; i<n; i++){
        if(v[i]==false){
            cout<<i+1;
            break;
        }
    }

    
}
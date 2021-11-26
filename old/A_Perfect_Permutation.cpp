#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    if(n%2==1){
        cout<<-1;
    }
    else{
        for(ll i=n; i>0; i--){
            cout<<i<<" ";
        }
    }
}
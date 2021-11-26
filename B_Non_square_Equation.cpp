#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll getSum(ll n){
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
    return sum;
}

bool check(ll t, ll n){

    return (t*t + getSum(t)*t)>=n ;
}

int main(){
    ll n;
    cin >> n;
    ll l=-1;
    ll r = 1e9;

    while(r>l+1){
        ll m = (r+l)/2;
        if(check(m,n)){
            r=m;
            
        }
        else{
            l=m;
        }
       // cout<<m<<endl;
    }

    cout<<r;



}
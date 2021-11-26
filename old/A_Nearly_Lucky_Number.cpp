#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll a;
    cin >> a;
    ll cnt=0;

    while(a>0){
        ll temp = a%10;
        if(temp==4||temp==7){
            cnt++;
        }
        a/=10;
    }
    if(cnt==4 || cnt==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
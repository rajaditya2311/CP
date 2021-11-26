#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> isprime(100001,true);
void sieve(){
    isprime[0] = isprime[1] = false;
        for (int i = 2; i <= 100000; i++) {
            if (isprime[i] && (long long)i * i <= 100000) {
                for (int j = i * i; j <= 100000; j += i)
                    isprime[j] = false;
            }
        }
}


vector<ll> tilli(100001,0);

void primes(){
    for(int i=1; i<=100000; i++){
        
        tilli[i]=tilli[i-1];
        if(isprime[i]){
            tilli[i]++;
        }
        
    }
}




int main(){
    sieve();
    primes();
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll n1 = sqrt(n);
        ll n2 = sqrt(k);
        if(n>=k){
            cout << tilli[n1] <<" "<<tilli[n1]-tilli[n2]<<endl;
        }
        else{
            cout << tilli[n1]<<" "<<0<<endl;
        }
        
    }
    return 0;
}
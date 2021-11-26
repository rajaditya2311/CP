#include<bits/stdc++.h>
#define tc() ll t; cin>>t;while(t--)

using namespace std;

typedef long long ll;
typedef double ld;

vector<bool> isprime(10000001,true);
void sieveoferatosthenes(){
    isprime[0]=false;
    isprime[1]=false;
    for (ll i = 2; i <= 10000000; i++) {
        if (isprime[i] && (long long)i * i <= 10000000) {
            for (ll j = i * i; j <= 10000000; j += i)
                isprime[j] = false;
        }
    }
}

vector<ll> primes(10000001,0);

void primeuntil(){
    primes[0]=primes[1]=0;
    
    for(ll i=2; i<=10000000; i++){
        primes[i]=primes[i-1];
        if(isprime[i]){
            primes[i]++;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    tc(){
         ll n;
        cin>>n;
        if(n==2){
            cout<<1<<endl;
        }
        else if(n==3){
            cout<<2<<endl;
        }
        else{
            ll m = n/2;
            ll k = primes[n]-primes[m];
            cout<<k+1<<endl;
        }
    }


    return 0;
}
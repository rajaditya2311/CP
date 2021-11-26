#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

vector <bool> isprime(1000001,true);


void sieveoferatosthenes(){
    isprime[0]=false;
    isprime[1]=false;
    for (int i = 2; i <= 1000000; i++){
        if (isprime[i] && (long long)i * i <= 1000000){
            for (int j = i * i; j <= 1e6; j += i)
                isprime[j] = false;
        }
    }
}

int cnt[1000001];

bool toBeafraid(ll num){
    ll dig=0;
    ll t = num;
    while(num>0){
        if(num%10==0) return false;
        dig++;
        num/=10;

    }
    ll div = pow(10,dig-1);
    num = t;
    while(num>0){
        num%=div;
        div/=10;
        if((num!=0 && isprime[num]==0)) 
            return false;
    }
    return true;

}
void precomputation(){
    
    
    
    for(int i=2; i<=1000000; i++){
        cnt[i] = cnt[i-1];
        if(isprime[i]){
            if(toBeafraid(i))
                cnt[i]++;
        }
    }
    
}




int main(){
    sieveoferatosthenes();
    
    precomputation();
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--) {

        ll n;
        cin >> n;
        cout << cnt[n] <<endl;



    }
    return 0;
}

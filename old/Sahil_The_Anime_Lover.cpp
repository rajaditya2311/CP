#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define p 10000001
vector<bool> isprime(p,true);
void sieveoferatosthenes(){
    isprime[0]=false;
    isprime[1]=false;
    for (int i = 2; i <= 10000000; i++) {
    if (isprime[i] && (long long)i * i <= 10000000) {
        for (int j = i * i; j <= 10000000; j += i)
            isprime[j] = false;
    }
}
}
vector<long long int> sum(p,0);
void sumofsieve(){
    for(ll i=2; i<10000001; i++){
        if(isprime[i]){
            sum[i]= sum[i-1]+i;
        }
        else{
            sum[i]=sum[i-1];
        }
    }
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
sieveoferatosthenes();
sumofsieve();

int T;
cin >> T;
while (T--) {
    ll n;
    cin >> n;
    cout << sum[n]<<endl;
}
return 0;
}

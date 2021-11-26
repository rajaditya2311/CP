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
#define mod 1e9+7
#define m 1e6

vector<bool> isprime(m+1,true);
void sieveoferatosthenes(){
    isprime[0]=false;
    isprime[1]=false;
    for (ll i = 2; i <= m; i++) {
    if (isprime[i] && (long long)i * i <= m) {
        for (ll j = i * i; j <= m; j += i)
            isprime[j] = false;
    }
}
}



int main()
{
    sieveoferatosthenes();
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll l,r;
    cin >> l >> r;
    cout << l << r;
}
return 0;
}

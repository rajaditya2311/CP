#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ba boolalpha
#define F first
#define S second
#define pb push_back
string alphabets = "abcdefghijklmnopqrstuvwxyz";
const long long int mod = 1000000007;
ll gcd(ll a,ll b){
if(b==0){
    return a;
}
return gcd(b,a%b);
}
ll n;
vector<ll>sieve(1e7+1);
vector<ll>elim(1e7+1);
void gen_primes(ll n){
for(ll i = 0;i<n;i++){
    sieve[i]=i;
}
for(ll i = 0;i<n;i++){
    if(sieve[i]=i){
        for(ll j = 2*i;j<=n;j+=i){
            sieve[j]=i;
            elim[i]=INT_MAX;
        }
    }
}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	gen_primes(1e7+1);
    
    cin>>n;
    for(ll i = 0 ;i<n;i++){
        map<ll,ll>mp;
        ll e;
        cin>>e;
        for(ll j = 0 ;j<e;j++){
            ll h;
            cin>>h;
            while(h!=1){
                mp[sieve[h]]++;
                h = h/sieve[h];
            }
        }
        for(auto it = mp.begin();it!= mp.end();it++){
            elim[(*it).F]=min(elim[(*it).F],(*it).S);
        }
    }
ll c = gcd(elim[1],elim[2]);
   for(ll i = 2 ;i<elim.size();i++){
     c = gcd(c,elim[i]);
   }
   cout<<c<<endl;
   return 0;
}
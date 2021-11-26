#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define f first
#define s second
#define pb push_back
#define POB pop_back
#define mp make_pair
const long long int mod=1000000007;


long long int expo(ll a, ll n){
    if(n==0)
        return 1;
    if(n%2==0){
        ll k = expo(a,n/2);
        ll p = (k*k)%mod;
        return p;
    }
    else{
        ll k = expo(a,n/2);
        ll p = (k*k)%mod;
        p= (p*a)%mod;
        return p;
    }    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >>n;
        pi p[n+1];
        p[0].f=0;
        p[0].s=0;

        for(int i=1; i<=n; i++){
            cin >> p[i].f;
        }

        for(int i=1; i<=n; i++){
            cin >> p[i].s;
        }

        ll arr[n+1]={0};

        for(int i=0; i<n+1; i++){
            arr[i]=0;
        }
        
        sort(p,p+n+1);
        //for(auto it:p){
            //cout<<it.second<<" ";
       // }

        ll distinct=0;
        ll i=1;

        while(i != n){
            
            if(arr[i] == 0){
                ll temp = i;
                ll k = i;
                if(i != p[i].second){
                    while(p[k].second != temp){
                
                        k = p[k].second;
                        arr[k] = 1;
                    }
            
                    distinct++;
                }
                
            }
            i++;
            
        }
        
        ll ans=expo(2,distinct);
        cout<<ans<<endl;
        
        

    }
    return 0;
}

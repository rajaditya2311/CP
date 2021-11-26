#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,q; cin >> n >> q;
    vi color(51,0);
    vi a(n+1); 
    loop(i,1,n+1){
        cin >> a[i];
        if(color[a[i]]==0){
            color[a[i]] = i;
        }
    } 
    set<int> s; 
    while(q--){
        ll t; cin >> t;

        cout << color[t]<<" ";

        
        loop(i,1,51){
            if(color[i]<color[t]){
                color[i]++;
            }
        }
        color[t]=1;

        

        


    }





    


    
}

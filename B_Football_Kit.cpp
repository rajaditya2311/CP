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
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n; 
    vi freq1(1e5+1,0);
    ll ans[n]= {n*(n-1)};

    pi a[n]; 
    loop(i,0,n){ 
        cin >> a[i].first >> a[i].second; 
        freq1[a[i].first]++; 
       
    } 

    
    loop(i,0,n){
        cout << (n-1)+freq1[a[i].second] <<" "<<(n-1)-freq1[a[i].second]<<endl;
    }






    
}

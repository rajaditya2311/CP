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

    ll n,m; cin >> n >> m;

    vi d(m); loop(i,0,m) cin >> d[i];
    sort(d.begin(),d.end());
    bool flag = true;
    if(m==0) cout<<"YES";
    else{
        loop(i,0,m-2){
        if(d[i+1]==d[i]+1 and d[i+2]==d[i]+2){
            flag = false;
            break;
        }
    }

        
        if(d[0]==1 || d[m-1]==n){
            cout << "NO";
        }
        
        else if(flag) cout << "YES";
        else cout<<"NO";
    }
    
    
    




  
    return 0;
}

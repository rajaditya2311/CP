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

    ll n,s,t; cin >> n >> s >> t; vi p(n+1); loop(i,1,n+1) cin>>p[i];
    bool flag = false;
    ll ans=0;
    ll f=s;
    while(1){

        if(s==t){
            flag = true;
            break;
        }
        
        else{
            ans++;
            s = p[s];
        }
        if(s==f){
            break;
        }
    }

    if(flag==true){
        cout<<ans;
    }
    else{
        cout<<-1;
    }




    




    
    return 0;
}

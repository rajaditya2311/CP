#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define POB pop_back
#define mp make_pair
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    ll a[n],b[m];
    
    for(ll i=0; i<n; i++){
        cin >> a[i];

    }
    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    
    ll j=0; 
    ll ans=0;
    
    for(ll i=0; i<m; i++){
        ll k=0;
        while(j<=n){

            if(b[i]>=a[j]){
                
                if(b[i]==a[j]){
                    k++;
                    ans++;
                }
                j++;
                
            }
            else if(b[i]==b[i+1]){
                j-=k;
                break;
            }
            else{
                break;
            }
            
        }
        
        
    }
    cout<<ans;

    return 0;
}

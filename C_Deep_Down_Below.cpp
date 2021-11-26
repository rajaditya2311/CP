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
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll k[n];
        pair<ll,ll> maxi[n];
        for(int i=0; i<=n; i++){
            maxi[i].second=0;
            maxi[i].first=0;
        }
        

        
        for(ll i=1; i<=n; i++){
            cin >> k[i];
            vector<ll> a(k[i]+1);
            
            for(int j=1; j<=k[i]; j++){
                cin >> a[j];
                maxi[i].first = max((a[j]-j+1), maxi[i].first);

            }
            ll zero=0;
            
            //cout<<maxi[i].first<<endl;
            //maxi[i].second = maxi[i].first + a.size();
            
                maxi[i].second = maxi[i-1].second + a.size();
            
    
            a.clear();
        }
        sort(maxi+1,maxi+n+1);
        
        
        ll mini = maxi[1].first;
        for(int i=1; i<=n-1; i++){
            if(mini+maxi[i].second < maxi[i+1].first){
                mini = (maxi[i+1].first - maxi[i].second);
            }
        }
        cout<<mini<<endl;

    }
    return 0;
}

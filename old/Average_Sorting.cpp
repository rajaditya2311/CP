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
        ll a[n];
        ll mini = 0;
        ll maxi = 0;
        ll k=0,j=0;
        cin >> a[0];
        for(ll i=1; i<n; i++){
            cin >> a[i];
            
            if(a[i]>a[i-1]){
                
                k=1;
                break;
            }
            
        }
        if(k==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        

    }
    return 0;
}

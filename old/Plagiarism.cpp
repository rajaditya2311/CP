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
        ll n,m,k;
        cin >>n>>m>>k;
        ll l[k];
        ll a[m+n+1]={0};
        for(int i=0; i<k; i++){
            cin >> l[i];
            a[l[i]]++;
        }
        ll d=0;
        for(int i=1; i<=n; i++){
            if(a[i]>1){
                d++;
            }
        }
        cout<<d<<" ";
        for(int i=1; i<=n; i++){
            if(a[i]>1){
                cout<<i<<" ";
            }
        }
        cout<<endl;


    }
    return 0;
}

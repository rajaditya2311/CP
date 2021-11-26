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
    for(int i=0; i<n; i++){
        cin >> a[i];

    }
    for(int j=0; j<m; j++){
        cin >> b[j];
    }
    int j=0; 
    ll res[m]={0};
    for(int i=0; i<m; i++){
        
        while(j<n){
            if(a[j]<b[i]){
                j++;
            }
            else
                break;
        }
        res[i] = j;
    }
    for(int i=0; i<m; i++){
        cout<<res[i]<<" ";
    }

    return 0;
}

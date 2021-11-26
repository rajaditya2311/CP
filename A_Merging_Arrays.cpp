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
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int i=0;
    int j=0;
    ll c[n+m];
    while(i<n || j<m){
        if(j==m || i<n and a[i]<b[j]){
            c[i+j] = a[i];
            i++;
        }
        else{
            c[i+j] = b[j];
            j++;
        }

    }
    for(int i=0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}

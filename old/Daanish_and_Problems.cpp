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
        
        ll a[10]={0};
        ll k;
        
        for(ll i=0; i<10; i++){
            cin >> a[i];
        }
        cin >> k;
        for(int i=9; i>=0; i--){
            if(k>=a[i]){
                k = k-a[i];
            }
            else{
                if(a[i]!=0){
                    cout << i+1<< endl;
                    break;
                }
            }
        }

    }
    return 0;
}

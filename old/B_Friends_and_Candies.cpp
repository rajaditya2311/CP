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
        ll sum=0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        if(n==1){
            cout<<0<<endl;
        }
        else if(sum%n!=0){
            cout<<-1<<endl;
        }
        else{
            ll cnt=0;
            ll k= sum/n;
            for(int i=0; i<n; i++){
                if(a[i]>k){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }


    }
    return 0;
}

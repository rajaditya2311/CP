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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll a,b;
        cin >> a >> b;
        if(a==1 and b==1){
            cout<<3<<endl;
        }
        else if(a==1){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }

    }
    return 0;
}

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

// 3 1 2 4
// 1 2 3 4
// -2 1 0 0 


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vi a(n);
    loop(i,0,n) cin >> a[i];
    vi b = a;
    sort(b.begin(),b.end());
    ll l=0,p=0;
    loop(i,0,n){
        if(a[i]!=b[i]) {
            l=i;
            break;
        }
        

    }
    for(int i=n-1; i>=0; i--){
        if(a[i]!=b[i]){
            p=i;
            break;
        }
    }

    reverse(a.begin()+l,a.begin()+p+1);
    if(is_sorted(a.begin(),a.end())){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<p+1;

    }
    else{
        cout<<"no";
    }
    

    
    return 0;
}

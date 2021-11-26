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
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll m,n; cin >> m >> n;


        if(m==1 and n==1) cout << 0 << endl;
        else if(m==1 and n==2){
            cout << 1 << endl;
        }
        else if(m==1 and n>2){
            if(n%3==1 || n%3==0) cout << n/3<<endl;
            else cout << n/3 +1<<endl;
        }
        else if(n==1 and m==2){
            cout << 1 << endl;
        }
        else if(n==1 and m>2){
            if(m%3==1 || m%3==0) cout << m/3<<endl;
            else cout << m/3 +1<<endl;
        }
        //else if(n==2 and m==2) cout << 2 <<endl;
        else{
            ll k1=0,k2=0,ans1=0,ans2=0;
            if(m%3==0 || m%3==1){
                k1 = m/3;
            }
            else{
                k1=m/3 +1;
            }
            ans1 = k1*n;
            if(n%3==0 || n%3==1){
                k2 = n/3;
            }
            else{
                k2=n/3 +1;
            }
            ans2 = k2*m;
            cout << min(ans1,ans2)<<endl;
        }
    }
    return 0;
}

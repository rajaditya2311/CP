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


bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
  
   return (ceil(log2(n)) == floor(log2(n)));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        ll q = n,p=n,i=0,j=0;
        

        while(q%3==0){
            q/=3;
            i++;

        }
        
        
        while(p%2==0){
            p/=2;
            j++;
        }
        if((!isPowerOfTwo(q) and q!=1) or j>i) cout << -1 << endl;
        else cout << 2*i-j<<endl;
        
            
        
        
    }
    return 0;
}

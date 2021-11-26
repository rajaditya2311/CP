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


bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
  
   return (ceil(log2(n)) == floor(log2(n)));
}
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        if(n==1) cout << "FastestFinger"<<endl;
        else if(n==2) cout << "Ashishgup"<<endl;
        else if((n%2!=0) ) cout <<"Ashishgup"<<endl;
        else if(!isPowerOfTwo(n)){
            if((n/2)%2==0){
                cout <<"Ashishgup"<<endl;
            }
            else{
                ll k= n;
                while(k%2==0){
                    k/=2;
                }
                if(isPrime(k)){
                    cout << "FastestFinger"<<endl;
                }
                else{
                    cout <<"Ashishgup"<<endl;
                }

            }
        }
        else cout<<"FastestFinger"<<endl;
    }
    return 0;
}

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
        ll n; cin >> n;
        if(n==1)cout << 1 <<endl;
        else if(n==2){
            cout << -1 << endl;
    
        }
        else{
            
            ll arr[n][n];
            ll token =1;
            
            if(n%2==0){
                ll token =1;
                loop(i,0,n/2){
                    loop(j,0,n){
                        cout << token <<" ";
                        token+=2;
                    }
                    cout << endl;
                }
                ll token_2=2;
                loop(i,0,n/2){
                    loop(j,0,n){
                        cout << token_2<<" ";
                        token_2+=2;
                    }
                    cout << endl;
                }
            }
            else{
                ll token = 1;
                loop(i,0,n/2){
                    loop(j,0,n){
                        arr[i][j]=token;
                        token+=2;
                    }
                }
                loop(j,0,n/2+1){
                    arr[n/2][j]=token;
                    token+=2;
                }
                ll token_2=2;
                loop(j,n/2+1,n){
                    arr[n/2][j] = token_2;
                    token_2+=2;
                }
                
                loop(i,n/2 + 1, n){
                    loop(j,0,n){
                        arr[i][j]=token_2;
                        token_2+=2;
                    }
                    
                }

                loop(i,0,n){
                    loop(j,0,n){
                        cout << arr[i][j]<<" ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}

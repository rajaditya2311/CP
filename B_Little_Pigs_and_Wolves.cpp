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
    ll n,m;
    cin >> n >> m;
    char c[n+2][m+2];
    loop(i,0,n+2) loop(j,0,m+2) c[i][j]='.';
    loop(i,1,n+1) loop(j,1,m+1) cin >> c[i][j];

    ll cnt=0;

    loop(i,1,n+1){
        loop(j,1,m+1){
            if(c[i][j]=='W'){
                if(c[i-1][j]=='P'|| c[i+1][j]=='P' || c[i][j-1]=='P' || c[i][j+1]=='P'){
                   //cout << i <<" "<< j <<endl;
                    cnt++;
                }
            }
        }
    }
    cout << cnt <<endl;

   
}

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
    ll n,m; cin >> n >> m;

    string s1,s2;
    map <string,string> ans;

    

    for(int i=0; i<m; i++){
        cin >> s1 >> s2;
        if(s1.length()> s2.length()) ans[s1] = s2; 
        else ans[s1] = s1;


    }
    for(int i=0; i<n; i++){
        cin >> s1;
        cout << ans[s1]<<" ";
    }




    return 0;
}

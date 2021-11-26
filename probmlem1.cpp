#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

#define pb push_back
#define POB pop_back
#define mp make_pair
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    ll answercount=0;
    while (t--){
        ll n; cin >> n;
        string w; cin >> w;
        char C='F';

        w.erase(remove(w.begin(), w.end(), C),w.end());
        int newlen = w.length();
        ll ans=0;

        loop(i,0,newlen-1){
            if(w[i]!=w[i+1]){
                ans++;
            }
        }
        cout << "Case #"<<++answercount<<": "<<ans<<endl;
        

        

        

    }
    return 0;
}

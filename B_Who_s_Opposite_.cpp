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
        ll a,b,c;
        cin >> a >> b >> c;
        ll x = max(a,b);
        ll y = min(a,b);
        ll dif = x-y-1;
        ll left = dif - (y-1);
        ll maxno = x + left;
        //cout<<left<<endl<<maxno;
        if(c>maxno || left<0){
            cout<<-1<<endl;
        }
        else{
            ll ans;
            if(c>x){
                 ans = c - dif -1 ;
            }
            else{
                 ans = c + dif + 1;
                if(ans> maxno){
                    ans = ans-maxno;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

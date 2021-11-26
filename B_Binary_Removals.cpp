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




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        ll ans1=INT_MAX,ans2=INT_MAX;

        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='1' and s[i+1]=='1'){
                ans1 = i;
                break;
            }
        }
        for(int i=s.length()-1; i>0; i--){
            if(s[i]=='0' and s[i-1]=='0'){
                ans2 = i;
                break;
            }
        }

        if(ans1 < ans2 and ans1!=INT_MAX and ans2!=INT_MAX){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}

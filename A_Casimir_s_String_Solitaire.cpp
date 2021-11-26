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
        string s;
        cin >> s;
        int i=0;
        int cnta=0,cntb=0,cntc=0;
        while(s[i]!='\0'){

            if(s[i]=='A') cnta++;
            if(s[i]=='B') cntb++;
            if(s[i]=='C') cntc++;
            i++;

        }

        if(cntb==(cnta+cntc)) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

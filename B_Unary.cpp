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
const long long int MOD = 1e6+3;
//vi dp(N,0);

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    string p;
    cin >> p;
    string s="";
    //map<char,int> a;

    for(int i=0; i<p.size(); i++){
        if(p[i]=='>'){
            s+="1000";
        }
        if(p[i]=='<'){
            s+="1001";
        }
        if(p[i]=='+'){
            s+="1010";
        }
        if(p[i]=='-'){
            s+="1011";
        }
        if(p[i]=='.'){
            s+="1100";
        }
        if(p[i]==','){
            s+="1101";
        }
        if(p[i]=='['){
            s+="1110";
        }
        if(p[i]==']'){
            s+="1111";
        }
    }
    reverse(s.begin(),s.end());
    ll ans=0;

    loop(i,0,s.size()){
        if(s[i]=='1'){
            ll temp = binpow(2,i,MOD);
            temp = temp%MOD;
            ans+=temp;
            ans = ans%MOD;
        }
    }
    cout << ans;
    

    return 0;
}

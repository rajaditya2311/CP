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

    string s;
    cin >> s;
    ll cnt4=0,cnt7=0;
    int i=0; 
    while(s[i]!='\0'){
        if(s[i]=='4') cnt4++;
        if(s[i]=='7') cnt7++;
        i++;
    }
    if(cnt4==0 and cnt7==0) cout <<-1;
    else if(cnt4 >= cnt7) cout <<4;
    else cout<<7;

   
    return 0;
}

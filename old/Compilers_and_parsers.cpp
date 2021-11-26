#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    string s;
    cin >> s;
    ll a = s.length();
    ll r=0,f=-2;
    for(int i=0; i<a; i++){
        if(s[i]=='<'){
            r++;
        }
        else if(s[i]=='>'){
            r--;
            f=f+2;
        }
        if(r==-1){
            break;
        }
    }
    if(r==0){
        cout << f+2<<endl;
    }
    else{
        cout << f << endl;
    }    
}
return 0;
}

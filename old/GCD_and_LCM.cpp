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
int gcd(int a, int b){
    if(b==0){
        return b;
    }
    return(b,a%b);
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll a,b;
    cin >> a >> b;
    ll gc=0,lcm=0;
    gc = __gcd(a,b);
    lcm = (a*b)/gc;
    cout << gc << " "<<lcm<<endl;
}
return 0;
}

#include "bits/stdc++.h"
using namespace std;
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
long long int T;
cin >> T;
while (T--) {
    ll n;
    cin >> n;
    ll t = log2(n);
    ll k = pow(2,t);
    cout <<k-1<<endl;
}
return 0;
}

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
    ll x1,x2,xa,xb;
    cin >> x1>>x2>>xa>>xb;
    ll k= xa/x1;
    ll m = xb/x2;
    cout<<k+m<<endl;
}
return 0;
}

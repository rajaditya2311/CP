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
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    ll n,k; cin >> n >> k;
    vector< pair<ll,ll> > b(n);

    loop(i,0,n){
        cin >> b[i].first;
        b[i].second=i+1;

    }
    sort(b.begin(),b.end());
    cout<< b[n-k].first<<endl;
    for(int i=n-k; i<n; i++){
        cout << b[i].second<<" ";
    }

    


    
}

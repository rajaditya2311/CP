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


bool sortbyfirst(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.first < b.first);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n,m; cin >> n >> m;
        vector < pair<ll,ll> > a(n);
        loop(i,0,n) {
            cin >> a[i].first;
            a[i].second = i%m;
        }

        sort(a.begin(),a.end(),sortbyfirst);
        ll min_dif = INT_MAX;
        
        for(int i=0; i<n-1; i++){
            if(a[i].second!=a[i+1].second){
                min_dif = min(min_dif,a[i+1].first-a[i].first);
            }
        }
        cout << min_dif<<endl;

    }
    return 0;
}


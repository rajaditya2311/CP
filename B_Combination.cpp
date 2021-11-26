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


bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{   if(a.second==b.second) return a.first > b.first;
    
    return (a.second > b.second);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector <pi> a(n);

    loop(i,0,n) cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end(),sortbysec);

    for(auto it:a){
        //cout << it.first <<" "<<it.second<<endl;
    }
    ll sum=0;
    for(int i=0; i<a.size(); i++){
        sum+= a[i].second;
    }
    //Scout << sum << endl;
    ll output=a[0].first;
    for(int i=1; i<min(sum+1,n); i++){
        output += a[i].first;
    }
    cout << output ;


    
    return 0;
}

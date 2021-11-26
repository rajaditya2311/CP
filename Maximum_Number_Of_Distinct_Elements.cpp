#include<bits/stdc++.h>


using namespace std;


const long long int N = 1e6+2;
const long long int MOD = 1e9+7;


#define F	first
#define S	second
#define pb	push_back
#define POB	pop_back
#define MP	make_pair
#define ld	long double
#define ump	unordered_map
#define ll 	long long int
typedef vector<string> vs;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll maxi = INT_MIN; 
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i].first;
            maxi = max(maxi, v[i].first);
            v[i].second = i;
        }
        int cnt = 0;
        int drem = cnt - 1;
        vi ans(n, 0);
        sort(v.begin(), v.end());
        for(ll i = n - 1; i >= 0; i--){
            if(v[i].first>cnt){
               v[i].first=cnt;
               cnt++;
            }
            else if(cnt == v[i].first){
                v[i].first = cnt;
            }
        }

        sort(v.begin(),v.end(),sortbysec);
        for(ll i = 0; i < n; i++)
            cout << v[i].first << " ";
        cout << endl;
    }
    return 0;
}
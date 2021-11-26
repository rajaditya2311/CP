#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	
	ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector <ll> v;
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        for(auto it:v){
            cout<<it<<" ";
        }    
        cout<<endl;
        sort(v.begin(), v.end());
        ll sum1 = 0, sum2 = 0;
        while(k > 1){
            sum1 += v.back();
            v.pop_back();
            sum2 +=v.back();
            v.pop_back();
            k--;
        }
        sum1 += v[v.size() - 1];
        v.pop_back();
        sum2 += v[v.size() - 1] + v[v.size() - 2];
        cout << max(sum1, sum2);
    }

	return 0;
}
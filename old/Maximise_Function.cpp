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
        int n;
        cin >> n;
        int a[n];
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mini = min(mini,a[i]);
            maxi = max(maxi,a[i]);
        }
        int k = maxi - mini;
        k = k*2;
        cout << k << endl;
    }
    return 0;
}

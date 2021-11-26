#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++)
            cin >> a[i];
        int maxm = INT_MIN;
        int sum = 0;
        int frequency[100000] = {0};
        for(int i = 0; i < n; i++){
           sum += a[i];
           if(sum < 0)
           {
               sum = 0;
           }
        frequency[sum]++;
        }
    for(int i = 0; i < 1000000; i++)
        maxm = max(maxm, ((i)*(frequency[i])));
        cout << maxm << endl;
    }
     return 0;
}
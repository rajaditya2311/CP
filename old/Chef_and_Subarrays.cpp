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

ll mostFrequent(long long int arr[], int n)
{
    
    unordered_map<int, int> hash;
    for (ll i = 0; i < n; i++)
        hash[arr[i]]++;
 
   
    ll max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return max_count;
}





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n,k;
        cin >> n >> k;
        
        ll arr[n];
        for(int i=0; i<n; i++){
            cin >>arr[n];
        }
        if(n==k){
            cout<<0<<endl;
        }
        else{
            ll m = mostFrequent(arr,n);
            cout << n-m<<endl;
        }
        
    }
    return 0;
}

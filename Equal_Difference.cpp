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

#define int long long

int mostFrequent(int arr[], int n)
{
    
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return max_count;
}








int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(n==1 || n==2){
            cout<<0<<endl;
        }
        else{
            ll k = mostFrequent(arr,n);
            if(k==1){
                cout<<n-2<<endl;
            }
            else{
                cout<<n-k<<endl;
            }
        }
    }
    return 0;
}

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
        int n,k;
        
        cin >> n >> k;
        int a[n];
        int mini = 1000000007;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(k%a[i]==0){
                mini = min(mini,k/a[i]);
            }
        }
       if(mini==1000000007){
           cout<< -1<<endl;
       }
       else{
           cout<<k/mini<<endl;
       }
    }
    return 0;
}

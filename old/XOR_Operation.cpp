#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1]){
            i++;
        }
        else{
            cout << a[i] <<endl;
            break;
        }
    }
}
return 0;
}

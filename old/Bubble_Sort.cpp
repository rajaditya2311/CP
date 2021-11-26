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
ll n;
cin >> n;
ll a[n];
for(ll i=0; i<n; i++){
    cin >> a[i];
}
ll t=0;
for(int i=0; i<n-1; i++){

    for(ll j=0; j<n-i-1; j++){
        if(a[j]>a[j+1]){
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
        }

    }
    for(ll k=0; k<n; k++){
        cout << a[k]<<" ";
    }
    if(is_sorted(a,a+n)){
        break;
    }
    cout << endl;
    
}
return 0;
}

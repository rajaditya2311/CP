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

        ll a[n];
        ll b[n];
        int k=0;
        int l=n-1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                b[k++]=a[i];
            }
            else{
                b[l--]=a[i];
            }
        }
        ll cnt=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(b[i],2*b[j])>1){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        //cout<<endl;

    }
    return 0;
}

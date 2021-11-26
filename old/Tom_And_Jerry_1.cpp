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
        int count=0;
        
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        ll m1 = llabs(c-a);
        ll m2 = llabs(d-b);
        if(k<m1+m2){
            cout<<"NO"<<endl;
        }
        else if((k-m1-m2)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

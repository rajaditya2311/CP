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
        ll x,y;
        cin >> x >> y;

        if(__gcd(x,y)>1){
            cout<<0<<endl;
        }
        else if(x==1 and y==1){
            cout<<2<<endl;
        }
        else if((x==1 and y%2==0) || (y==1 and x%2==0)){
            cout<<1<<endl;
        }
        else if(x==1 || y==1){
            cout<<2<<endl;
        }
        else if(x%2==0 || y%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}

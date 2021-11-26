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
        ll n,k,x,y;
        cin >> n >> k >> x >> y;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else if(x<y){
            ll g=x+n-y;
            if(k%4==1){
                cout<<g<<" "<<n<<endl;
            }
            else if(k%4==2)
                cout<<n<<" "<<g<<endl;
            else if(k%4==3)
                cout<<y-x<<" "<<0<<endl;
            else
                cout<<0<<" "<<y-x<<endl;        
        }
        else{
            ll g=n+y-x;
            
            if(k%4==1){
                cout<<n<<" "<<g<<endl;
            }
            else if(k%4==2)
                cout<<g<<" "<<n<<endl;
            else if(k%4==3)
                cout<<0<<" "<<x-y<<endl;
            else
                cout<<x-y<<" "<<0<<endl;
        }
    }
    return 0;
}

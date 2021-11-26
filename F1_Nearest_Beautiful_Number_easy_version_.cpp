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
vector<ll> one(1000,0);
vector<ll> two(100000,0);

void store(){
    ll k= 0;

    for(int i=1; i<10; i++){

        for(int j=1; j<10; j++){
            ll sum=0;
            for(int k = 0; k<j; k++){
                
                sum = sum*10;
                sum = sum + i;
            }
            one[k++]=sum;

        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    store();
    cout<<one[0]<<" "<<one[80];
    
   /* while (t--){
        ll n,k;
        cin >> n >> k;

        if(k==1){
            
            ll ct = n;

            while(ct>0){
                ll t1 = log10(ct);
                ll t2 = 
            }
        }
        else{

        }
    }*/
    return 0;
}

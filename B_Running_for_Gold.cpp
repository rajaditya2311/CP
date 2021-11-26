#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);







int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    



    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;

        ll arr[n][5];
        loop(i,0,n) loop(j,0,5) cin >> arr[i][j];

        ll winner =0;
        loop(i,1,n){
            ll cnt=0;
            loop(j,0,5) if(arr[i][j]<arr[winner][j]) cnt++;
            
            if(cnt>=3) winner = i;
        }
        bool flag = true;
        loop(i,0,n){
            if(i==winner) continue;
            else{
                ll cnt=0;
                loop(j,0,5) if(arr[i][j]>arr[winner][j]) cnt++;
                if(cnt<=2){
                    flag = false;
                    break;
                }    
                    
            }
        } 
        if(flag)
        cout<<winner+1<<endl;
        else
        cout<<-1<<endl;



    }
    return 0;
}

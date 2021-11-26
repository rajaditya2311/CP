#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair







int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll arr[n];
        ll odd=0,even=0;
        loop(i,0,n){
            cin >> arr[i];
            if(arr[i]%2!=i%2){
                if(i%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        if(n==1){
            cout<<0<<endl;
        }
        else{
             if(even!=odd){
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
        }
        }
       
        
    }
    return 0;
}

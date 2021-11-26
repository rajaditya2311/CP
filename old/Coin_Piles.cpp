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
        ll a,b;
        cin >> a >> b;
        ll dif = llabs(a-b);
        cout<<dif;
        ll mini = min(a,b);
        cout<<mini;
        if(dif>mini){
            cout<<"NO"<<endl;
        }
        else if(dif == mini-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

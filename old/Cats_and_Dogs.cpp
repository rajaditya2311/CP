#include "bits/stdc++.h"
using namespace std;
typedef int ll;
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
        ll c,d;
        long long int l;
        cin >> c >> d >> l;
        if(c==0 && d==0 &l==0)
            cout<<"yes\n";
        else if(l%4!=0){
            cout<<"no\n";
        }
        else if(l>=(long long) 4*(max(c-2*d,0)+d) && l<= (long long)4*(c+d)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

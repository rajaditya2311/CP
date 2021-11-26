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
        ll n,m;
        cin >> n >> m;
        string s;
        cin >>s;
        for(int i=0; i<m; i++){
            if(s[1]=='1'){
                s[0]='1';
            }
            if(s[n-2]=='1'){
                s[n-1]='1';
            }
            if(s[n-1]=='1'&&s[n-3]!='1'){
                s[n-2]='1';
            }
            for(int j=0; j<n-2; j++){
                if(s[j]=='1'&&s[j+1]=='0' &&s[j+2]!='1'){
                    
                    s[j+1]='1';
                }
                if(s[j+2]=='1'&&s[j-1+2]=='0' &&s[j-2+2]!='1'){
                    
                    s[j-1+2]='1';
                }

            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}

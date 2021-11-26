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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        string s;
        ll n;
        cin >> n;
        cin >> s;

        int i=0;
        
        while(s[i]!='\0'){
            if(s[i]=='L' and s[i+1]=='R'){
                cout<<"LR";
                i+=2;
            }
            else if(s[i]=='R' and s[i+1]=='L'){
                cout<<"RL";
                i+=2;
            }
            else if(s[i]=='U'){
                cout<<"D";
                i++;
            }
            else{
                cout<<"U";
                i++;
            }
            
        }
        cout<<endl;
    }
    return 0;
}

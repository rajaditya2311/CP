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
        string s;
        cin >> s;
        if(s.length()<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }
    return 0;
}

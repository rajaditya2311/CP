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
bool lang1(string s){
    for(int i=0; i<s.length(); i++){
        if(!(s[i]>=97 && s[i]<=109))
            return false;
          
    }
    return true;
}
bool lang2(string s){
    for(int i=0; i<s.length(); i++){
        if(!(s[i]>=78 && s[i]<=90))
            return false;
            
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll k;
        cin >> k;
        
        ll count=0;
        for(int i=0; i<k; i++){
            string s;
            cin >> s;
            if(lang1(s)==true || lang2(s)==true){
                count++;
            }
        }
        //cout<<count<<endl;
        if(count==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

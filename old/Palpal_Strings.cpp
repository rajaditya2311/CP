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
        int counter[26]={0};
        int i=0;
        while(s[i]!='\0'){
            counter[s[i++]-'a']++;
        }
       
        ll even=0,odd1=0;
        
        for(int i=0; i<26; i++){
            if(counter[i]>0){
                
                    even = even + counter[i]/2 ;
                
                
                    odd1 = odd1 +counter[i]%2;
                
            }
        }

        if(odd1 > even){
            cout <<"NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
        }
    }
    return 0;
}

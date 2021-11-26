#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define pb push_back
#define POB pop_back
#define mp make_pair
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    ll test = 0;
    while (t--){
        string s;
        cin >> s;
        int i=0;
        int j = s.length()-1;
        int arr[26];
        while(j>=i){
            if(s[i]==s[j]){
                j--;
            }
            else{
                char c = s[j];
                s[j] = s[i];
                s[i] = c;
                i++;
                j--;
            }
        }
        cout<<s<<endl;


    
    }
    return 0;
}

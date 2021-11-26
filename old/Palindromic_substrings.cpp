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
        string s1,s2;
        cin >> s1 >> s2;
        int s1c[26]={0};
        int s2c[26]={0};
        int i=0,k=0,flag=0;
        while(s1[i]!='\0'){
            s1c[s1[i++]-'a']++;
        }
        while(s2[k]!='\0'){
            s2c[s2[k++]-'a']++;
        }
        for(int j=0; j<26; j++){
            if(s1c[j]>0 && s2c[j]>0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;
}

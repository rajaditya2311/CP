#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;


 ll t;
ll n,m,q;
ll cnt;
string s;
ll k;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    cin >> t;
    
    while (t--){
        
        cin >> n >> m >> q;
        ll a[n+1]={0};
        bool flag = true;
        cnt =0;
        while(q--){
           
            
            cin >> s >> k;
            if(s[0]=='+'){
                if(a[k]!=0){
                    flag = false;
                    break;
                }
                a[k]++;

                cnt++;
                
            
            }
            else{
                if(a[k]!=1){
                    flag = false;
                    break;
                }
                a[k]--;
                cnt--;
                
            }
            if(cnt>m){
                flag = false;
                break;
            }
           

        }
        if(flag==false){
            cout<<"Inconsistent"<<endl;
        }
        else{
            cout<<"Consistent"<<endl;
        }
    }
    return 0;
}

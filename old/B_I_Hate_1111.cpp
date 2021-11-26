#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

ll checkbase(ll n){
    
    if(n>111111111)
        return n%111111111;
    if(n>11111111)
        return n%11111111;
    if(n>1111111)
        return n%1111111;
    if(n>111111)
        return n%111111; 
    if(n>11111)
        return n%11111; 
    if(n>1111)
        return n%1111; 
    if(n>111)
        return n%111; 
    if(n>11)
        return n%11;

    return 0;                         
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll x;
        cin >> x;
        ll flag=0;
        if(x<=10){
            cout<<"NO"<<endl;
        }
        else{
            while(x>0){
                if(x%11==0 || x%111==0 || x%1111==0 || x%11111==0 || x%111111==0 || x%1111111==0 || x%11111111==0 || x%111111111==0){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
                else{
                    x = checkbase(x);
                    
                }
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
        
       
        

        
        
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(bool a[],ll n){
    for(int i=0;i<n;i++){
        if(a[i]==false){
            return false;
        }
    }
    return true;
}
int main(){
        ll n,p,q;
        cin >> n;
        cin >>p;
        ll x[p];
        bool a[n]={false};
        for(int i=0; i<p; i++){
            cin >> x[i];
            a[x[i]-1]=true;
        }
        cin >>q;
        ll y[q];
        for(int i=0; i<q; i++){
            cin >> y[i];
            a[y[i]-1]=true;
        }
        bool k= check(a,n);
        //for(int i=0; i<n; i++){
           // cout<<a[i]<<" ";
        //}
        
        if(k==true){
            cout<<"I become the guy.";
        }
        else{
            cout<<"Oh, my keyboard!";
        }


}
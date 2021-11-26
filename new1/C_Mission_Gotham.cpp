#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ba boolalpha
string alphabets = "abcdefghijklmnopqrstuvwxyz";
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll p;
cin>>p;
ll a[p];
for(int i = 0 ;i<p;i++){
    cin>>a[i];
}
ll q;
cin>>q;
ll x[q];
ll k[q];
for(int i = 0;i<q;i++){
    cin>>x[i]>>k[i];
}
ll sum = 0;
for(int i = 0;i<q;i++){
    ll j = x[i]-1;
    sum = 0;
    while(k[i]>0 && j<p){
        k[i] = k[i]-a[j];
        if(k[i]<0){
            a[j] = a[j]-k[i];
        }else if(k[i]==0){
            sum = sum +a[j]*((j+1)-x[i]);
           a[j]=0;
           break;
        }else if(k[i]>0){
           sum = sum +a[j]*((j+1)-x[i]);
           a[j] = 0;
           j++;
        }
    }

    cout<<sum<<endl;
}

return 0;
}
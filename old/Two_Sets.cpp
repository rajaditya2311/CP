#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll k = (n*(n+1))/2;
    if(k%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        vector<bool> v(n+1,false);

        ll sum=k/2;
        ll i=n;
        while(sum>0){
            if(sum>=i){
                sum = sum-i;
                v[i]=true;
                i--;
            }
            else{
                v[sum]=true;
                sum=0;
            }
            
            
        }
        ll arr1=0;
        for(int i=1; i<=n; i++){
            if(v[i]==true){
                arr1++;
            }
        }
        ll arr2= n-arr1;

        cout<<arr1<<endl;
        for(int i=1; i<=n; i++){
            if(v[i]==true){
                cout<<i<<" ";
            }
        }
        cout<<endl<<arr2<<endl;
        for(int i=1; i<=n; i++){
            if(v[i]==false){
                cout<<i<<" ";
            }
        }


    }
}
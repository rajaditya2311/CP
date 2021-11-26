#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,w,r=0;
        cin >> n >> w >>r;
        long long int a[n];
        for(long long int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long int maxw=0;
        for(int i=0; i<n; i++){
            if(a[i]==a[i+1]){
                i++;
                maxw = maxw + 2*a[i];
            }
        }
        if(maxw + r >= w){
            cout<<"YES"<<endl;
        
        }
        else
            cout<<"NO"<<endl;
    }
}
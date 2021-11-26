#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> a(n+1,false);
    int b[n];

    for(int i=0; i<n; i++){
        cin >> b[i];
        a[b[i]]=true;
    }
    int flag=0;
    for(int i=1; i<=n; i++){
        if(a[i]==false){
            cout<<"No";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Yes";
    }
    
}
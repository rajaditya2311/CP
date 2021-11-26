#include<bits/stdc++.h>
using namespace std;

bool checkprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return false;

    }
    return true;
}

int main(){
    int n,m;
    cin >> n >>m;
    int temp=0;
    for(int i=n+1; i<=m; i++){
        if(checkprime(i)){
            temp=i;
            break;
        }
    }
    //cout<<temp;
    if(temp==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
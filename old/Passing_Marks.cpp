#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,t1,a1,b1,c1;
        cin >> a>>b>>c>>t1>>a1>>b1>>c1;
        if(a1>=a && b1>= b && c1>= c && a1+b1+c1 >= t1 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
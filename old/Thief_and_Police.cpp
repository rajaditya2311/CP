#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,m,x,y,a,b,g,f;

        cin >> n >> m >> x >> y >> a >> b;
        g = n-x + m-y;
        f = llabs(n+b -a - m) + min(n-a,m-b);
        if (f<g){
            cout <<"NO"<<endl;
        }
        else
            cout <<"YES"<<endl;

    }
}
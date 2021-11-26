#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<long long int, char > pc;

int main(){
   
    ll n;
    
    cin>>n;
    ll m=n/2;
    pc p[n+1];
    for(int i=1; i<=n; i++){
        p[i].first=i;
        cin>>p[i].second;
    }
    
    pair<pc,pc> k[m+1];
    for(int i=1; i<=m; i++){
        if(p[i].second=='L' && p[m+i].second=='R'){
            k[i].first = p[i];
            k[i].second =p[m+i];
        }
        else if(p[i].second=='R'&& p[m+i].second=='L'){
            k[i].first =p[m+i];
            k[i].second=p[i];
        }
        else{
            k[i].first=p[i];
            k[i].second=p[m+i];
        }


    }
    for(int i=1; i<=m; i++){
        cout<<k[i].first.first<<" "<<k[i].second.first<<endl;
    }
    

return 0;

}

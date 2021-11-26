#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define ba boolalpha
#define F first
#define S second
#define pb push_back
string alphabets = "abcdefghijklmnopqrstuvwxyz";
const long long int mod = 1000000007;
void solve(){
ll n,m,x;
cin>>n>>m>>x;
vector<ll>v1;
vector<ll>v2;
for(ll i = 0 ;i<n;i++){
    ll e;
    cin>>e;
    v1.pb(e);
}
for(ll i = 0 ;i<m;i++){
    ll e;
    cin>>e;
    v2.pb(e);
}
stack<ll>s1;
stack<ll>s2;
for(ll i = n-1;i>=0;i--){
s1.push(v1[i]);
}for(ll i = m-1;i>=0;i--){
s2.push(v2[i]);
}
ll sum = 0;
ll cnt = 0;
while(sum<x){
    ll k = s1.top();
    ll j = s2.top();
    ll c = min(j,k);
    if(j<k){
        s2.pop();
        cnt++;
    }else{
      s1.pop();
      cnt++;
    }
    sum+=c;
}
if(sum>x){
cout<<cnt-1<<endl;
}else{
    cout<<cnt<<endl;
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
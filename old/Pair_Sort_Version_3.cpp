#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
bool sortbysecdesc(const pair<ll,ll> &a,const pair<ll,ll> &b){
       return a.second>b.second;
}
bool sortbyfirstasc(const pair<ll,ll> &a,const pair<ll,ll> &b){
      if(a.second == b.second){
          return a.first<b.first;
      }

      return a.second > b.second;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
vector< pair<ll,ll> > v;
ll n;
cin >> n;
ll arr[n],arr1[n];
for(ll i=0; i<n; i++){
    cin >> arr[i];
}
for(ll i=0; i<n; i++){
    cin >> arr1[i];
}
for(ll i=0; i<n; i++){
    v.push_back(make_pair(arr[i],arr1[i]));

}
sort(v.begin(),v.end(),sortbysecdesc);
sort(v.begin(),v.end(),sortbyfirstasc);

for(ll i=0; i<n; i++){
    cout << v[i].first << " "<<v[i].second <<" ";
}

return 0;
}

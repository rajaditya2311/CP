#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<long long int,long long int> pi;
bool sortbyfirstasc(const pair<ll,ll> &a,const pair<ll,ll> &b){
      
          return a.first<b.first;
      

      return a.second > b.second;
}
bool sortbysecasc(const pair<ll,ll> &a,const pair<ll,ll> &b){
       if(a.first==b.first)
         return a.second<b.second;
}      

int main()
{
    vector< pair<ll,ll> > v;
    ll n;
    cin >> n;
    ll arr[n],arr1[n];
    for(ll i=0; i<n; i++){
        cin >> arr[i]>>arr1[i];
    }
    for(ll i=0; i<n; i++){
        v.push_back(make_pair(arr[i],arr1[i]));

    }
    sort(v.begin(),v.end());
    
    ll current=v[0].second;
    for(int i=1; i<v.size(); i++){
        if(current>v[i].second){
                current=v[i].first;
        }
        else{
            current=v[i].second;
        }
    }
    cout<<current;


    return 0;
}
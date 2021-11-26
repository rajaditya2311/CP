#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);



  

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
   if(a.first==b.first)
        return a.second>b.second;

    return a.first<b.first;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll v; cin >> v;
    
    vector< pair <ll,ll> > ans(9);
    loop(i,0,9){
        
        cin >> ans[i].first;
        ans[i].second = i+1;

    }
    vector<pair<ll,ll>> ans2 = ans;

    sort(ans.begin(),ans.end(),sortbysec);

    /*for(auto it: ans){
        cout << it.second << " "<<it.first<<endl;
    }*/

    ll k = (v)/ans[0].first;
    if(k==0){
        cout << -1;
    }
    else{
        string s="";
        for(int i=0; i<k; i++){
            s+=ans[0].second+'0';
        }
        
        ll final = v - (k*ans[0].first);
        //cout << final << endl;
        bool flag = true;
        ll ptr=0;
        loop(j,0,s.length()){
            //cout <<"stat1"<<endl;
            for(int i=8; i>=0; i--){
                if(final-ans2[i].first+ans[0].first>=0){
                    if(s[j]-'0' < ans2[i].second){
                        s[j]= ans2[i].second+'0';
                        final = final-ans2[i].first+ans[0].first;
                    }
                    
                    
                    //cout << "works"<<endl;
                }
            }
        
        }
            


        cout << s;
    }
    
    


    
    return 0;
}

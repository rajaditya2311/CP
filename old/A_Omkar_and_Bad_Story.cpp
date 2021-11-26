#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ld long double
#define ba boolalpha
#define F first
#define S second
#define pb push_back
string alphabets = "abcdefghijklmnopqrstuvwxyz";
const long long int mod = 1000000007;
#define loop(i,a,b) for(int i=a;i<b;i++)
ll gcd(ll a,ll b){
if(b==0){
    return a;
}
return gcd(b,a%b);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>ans(n);
    bool v = false;
    bool val =false;
    ll c = INT_MIN;
    loop(i,0,n)cin>>ans[i];
    sort(ans.begin(),ans.end());
    loop(i,0,n){
        loop(j,i+1,n){
            ll c = llabs(ans[i]-ans[j]);
            if (binary_search(ans.begin(), ans.end(), c)){
                 val = false;
            }
            else{
                val = true;
                break;
            }
        }
    }
    if(val==false){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        loop(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    if(val==true){
   loop(i,0,n){
        if(ans[i]<0){
            cout<<"NO"<<endl;
            v = true;
            break;
        }else{
          c  = max(c,ans[i]);
        }
    }
    if(v==false){
        cout<<"YES"<<endl;
        ll k = c+1;
        cout<<k<<endl;
        loop(i,0,c+1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    }
    
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
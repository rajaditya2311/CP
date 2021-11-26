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



set<ll> primeFactors(ll n)
{
    set<ll> s;
    while (n % 2 == 0)
    {
        s.insert(2);
        n = n/2;
    }
 
    
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
           s.insert(i);
            n = n/i;
        }
    }
 
   
    if (n > 2)
        s.insert(n);
    return s;    
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll a,b;
        cin >> a >> b;

        if(a>1 and b==1) cout <<"NO"<<endl;
        else if(a==1 and b==1) cout << "YES"<<endl;
        else if(a==b) cout <<"YES" <<endl;
        else if(a==1) cout <<"YES"<<endl;
        
        else{
            set <ll> ans1 = primeFactors(a);
            set <ll> ans2 = primeFactors(b);
            
           // for(auto it: ans1) cout <<it <<" ";
            //cout<<endl;
           // for(auto it: ans2) cout << it <<" ";
            bool flag = true;
            for(auto it:ans1){
                if(ans2.count(it)<1) flag = false;
            }
            if(flag){
                cout<<"YES"<<endl;

            }
            else{
                cout <<"NO"<<endl;
            }
           
        }
    }
    return 0;
}

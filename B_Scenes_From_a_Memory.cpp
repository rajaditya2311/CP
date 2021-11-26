#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ba boolalpha
#define F first
#define S second
#define pb push_back
#define all(x) (x).begin(), (x).end()
const long long int mod = 1000000007;
#define loop(i,a,b) for(int i=a;i<b;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
long long binpow(long long a, long long b, long long m) {  a %= m;long long res = 1; while (b > 0) { if (b & 1)res = res * a % m;a = a * a % m;  b >>= 1;} return res;}
long long sum_array(vector<ll>&ans){ll n = ans.size();ll x = 0;loop(i,0,n){x+=ans[i];}return x;}
bool ans(ll n, ll iter=20) {
    if (n < 4)
        return n == 2 || n == 3;

    for (ll i = 0; i < iter; i++) {
        ll a = 2 + rand() % (n - 3);
        if (binpow(a, n - 1, n) != 1)
            return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1;
    ll cnt = 0;
    bool flag = 0;
    loop(i,0,n){
        string s2 = "";
        s2+=s[i];
        ll x = stoi(s2);
        if(x%2==0 and x>2){
            cout<<1<<endl;
            cout<<x<<endl;
            flag = 1;
            break;
        }
        else if(ans(x)){
            cout<<1<<endl;
            cout<<x<<endl;
            flag = 1;
            break;
        }
    }
    string s3 = "";
    string s4 = "";
    string s5 = "";
    string s6 = "";
    ll cnt1 = 0;
    ll cnt2 = 0;
    ll cnt3 = 0;
    ll cnt4 = 0;
    loop(i,0,n){
        if(s[i]=='2'){
            s3+=s[i];
            cnt1++;
        }
        if(cnt1>0){
            if(s[i]=='5' or s[i]=='7'){
                cout<<2<<endl;
                s3+=s[i];
                cout<<s3<<endl;
                flag = 1;
                break;
            }
        }
        if(s[i]=='3'){
            s4+=s[i];
            cnt2++;
        }
        if(cnt2>0){
            if(s[i]=='2' or s[i]=='5'){
                cout<<2<<endl;
                s4+=s[i];
                cout<<s4<<endl;
                flag = 1;
                break;
            }
        }
        if(s[i]=='5'){
            s5+=s[i];
            cnt3++;
        }
        if(cnt3>0){
            if(s[i]=='2' or s[i]=='7'){
                cout<<2<<endl;
                s5+=s[i];
                cout<<s5<<endl;
                flag = 1;
                break;
            }
        }
        if(s[i]=='7'){
            s6+=s[i];
            cnt4++;
        }
        if(cnt4>0){
            if(s[i]=='2' or s[i]=='7'){
                cout<<2<<endl;
                s6+=s[i];
                cout<<s6<<endl;
                flag = 1;
                break;
            }
        }

    }
    vector<ll>freq(10,0);
    bool flag1 = 0;
    if(flag==0){
       loop(i,0,n){
           string s2 = "";
        s2+=s[i];
        ll x = stoi(s2);
        freq[x]++;
       }
       loop(i,0,10){
           if(freq[i]>1){
               cout<<2<<endl;
               cout<<i<<i<<endl;
               flag1 = 1;
               break;
           }
       }
    }
    if(flag1==0 and flag==0){
         cout<<n<<endl;
         cout<<s<<endl;
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
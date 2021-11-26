#include<bits/stdc++.h>

using namespace std;


#define ll long long int
#define ba boolalpha
#define F first
#define S second
#define pb push_back
string alphabets = "abcdefghijklmnopqrstuvwxyz";
const long long int mod = 1000000007;
ll gcd(ll a,ll b){
if(b==0){
    return a;
}
return gcd(b,a%b);
}
vector<bool>is_prime(10000000,true);
void gen_prime(){
   is_prime[0]=is_prime[1]=false;
   for(ll i = 0 ;i*i<=10000000;i++){
    if(is_prime[i]){
        for(ll j = i*i;j<=10000000;j=j+i){
            is_prime[j]=false;
        }
    }
   }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	gen_prime();
    vector<int> v;
    for(int i=0; i<100; i++){
        cout << is_prime[i]<<" ";
    }
    for(int i = 1;i * i < 10000000;++i)
        for(int j = 1;j * j * j * j < 10000000;++j)
            if(is_prime[i * i + j * j * j * j])
                v.push_back(i * i + j * j * j * j);
sort(v.begin(),v.end());
unique(v.begin(),v.end());
int T,n,sz = v.size();
cin>>T;
while(T--){
    cin>>n;
if(n<=1){
    cout<<"0";
}
else{
    cout<<(upper_bound(v.begin(),v.end(),n)-v.begin());
}
cout<<endl;
}
}
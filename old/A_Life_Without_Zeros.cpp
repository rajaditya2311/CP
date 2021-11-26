#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){
    string a,b;
    cin >> a >> b;
    ll m = stoi(a);
    ll n = stoi(b);
    ll k = m+n;
    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());

    ll m1 = stoi(a);
    ll m2 = stoi(b);
    ll k1 = m1+m2;

    string str;
    stringstream ss;
    ss<< k;
    ss >> str;
    str.erase(remove(str.begin(),str.end(),'0'),str.end());
    ll p = stoi(str);
    if(p==k1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
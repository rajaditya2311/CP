#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    ll n,r,g,b;
    cin  >> n >> r >> g >> b;
    cout<< min(min((r+b+g)/3,min(r,b)),n)<<endl;
    

}
return 0;
}

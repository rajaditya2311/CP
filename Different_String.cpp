#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first

#define pb push_back
#define POB pop_back
#define mp make_pair

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string p[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        }

        string s = p[0];
        bool flag = true;
        for(int i=0; i<n; i++){

            leftrotate(s,1);

            for(int j=0; j<n; j++){
                if(s==p[j]){
                    flag = false;
                    break;
                }
            }

            if(flag==true){
                cout<<s<<endl;
                break;
            }

            
        }

       





    }
    return 0;
}

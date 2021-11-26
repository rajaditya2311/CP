#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        
        ll n; cin >> n;
        vector <pair<ll,ll>> a(n);
        loop(i,0,n) cin >> a[i].first;

        loop(i,0,n){
            char t;
            cin >> t;
            if(t=='R') a[i].second=0;
            else a[i].second =1;
        }
        sort(a.begin(),a.end());
        bool flag = true;
        loop(i,0,n){
            if(a[i].first <1 and a[i].second==1){
                flag=false;
                break;
            }
            if(a[i].first>n and a[i].second==0){
                flag=false;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
        else{
            vi sum_red(n,0);
            vi sum_blue(n+1,0);
            if(a[0].second==0){
                sum_red[0]=1;
            }
            loop(i,1,n){
                sum_red[i]=sum_red[i-1];
                if(a[i].second==0){
                    sum_red[i]++;
                   
                }
            }
            if(a[n-1].second==1){
                sum_blue[n-1]=1;
            }
            for(int i=n-2; i>=0; i--){
                sum_blue[i]=sum_blue[i+1];
                if(a[i].second==1){
                    sum_blue[i]++;
                }
            }
            

            loop(i,0,n){
                if(a[i].first!=i+1){
                    if(sum_blue[i]<1 and sum_red[i]<1){
                        flag=false;
                    }
                }
            }

            if(!flag){
            cout<<"NOpe"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }



        }

        



        
    }
    return 0;
}

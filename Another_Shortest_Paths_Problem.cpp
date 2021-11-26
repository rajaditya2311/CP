#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    
    while (t--){
        ll m,n,x,y;
        cin >> n >> m >> x >> y;

        ll c1 = max(m,n);
        ll c2 = min(m,n);

        ll cost2 = (c2-1)*y + (c1-c2)*x;

        ll cost1 = (n+m-2)*x;

        ll cost3 = INT_MAX;


            if((c1-c2)%2==0){
                cost3 = (c2-1)*y + (c1-c2)*y;
            }
            else{
                cost3 = (c2-1)*y + (c1-c2-1)*y + x;
            }
            
        



        cout << min(cost1,min(cost2,cost3))<<endl;
        
       




        





    }
    return 0;
}

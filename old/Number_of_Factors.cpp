#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll ntc;
    cin>>ntc;

    while(ntc--)
    {
        ll n;
        cin>>n;

        map<ll,ll> primepower;

        while(n--)
        {
            ll t;
            cin>>t;

            for(int i=2; i*i<=t; i++)
            {
                while(t%i==0)
                {
                    primepower[i]++;
                    t/=i;
                }
            }

            if(t>1)
            {
                primepower[t]++;
                t=1;
            }
        }

        ll ans=1;

        for(auto it:primepower)
        {
            ans *= (it.second + 1);
        }

        cout<<ans<<'\n';
    }
}    

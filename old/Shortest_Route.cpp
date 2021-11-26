#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        int a[n+1] = {0};
        int b[m+1] = {0};
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i <= m; i++)
            cin >> b[i];
        int res[m+1];
        for(int i = 1; i <= m; i++)
            res[i] = -1;
        for(int i = 1; i <= m; i++)
        {
            int mini = INT_MAX;
            int time = 0;
            if(a[b[i]] != 0)
            {
                res[i] = time;
            }
            else
            {
                int left = b[i] - 1;
                int right = b[i] + 1;
               while(left >= 1 || right <= n)
               {
                   if(left >= 1){
                    if(a[left] == 1){
                        time = b[i] - left;
                        mini = min(mini, time);
                    }
                    else 
                        left--;
                   }
                     if(right <= n){
                        if(a[right] == 2)
                        {
                            time = right - b[i];
                            mini = min(mini, time);
                        }
                        else 
                            right++;
                    }
                    if(mini != INT_MAX)
                    {
                        res[i] = mini;
                        break;
                    }
               }
            }
        }
        for(int i = 1; i <= m; i++)
            cout << res[i] << " ";
        cout << endl;
    }
     return 0;
}
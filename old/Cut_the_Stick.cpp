#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n;
    cin >> n;
    ll int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    
    for(int i = 0; i < n; i++){
        ll int count = 0;
        
            
        for(int j = i; j < n; j++){
           if(a[i]==0){
              break;
           }
            a[j] = a[j] - a[i];
            count++;
        }
        cout << count << endl;
   }
    return 0;
}
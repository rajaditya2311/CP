#include <bits/stdc++.h>
using namespace std;

int main(){

    int t=0;
    cin >> t;
    while(t--){
        long long int n=0;
        cin >> n;
         long long int a[n], b[n];
        
         long long int amax = -1;
         long long int bmax =-1;
        for( long long int i = 0; i<n; i++){
            cin >> a[i];
                    
        }
        for( long long int j = 0; j<n; j++){
            cin >> b[j];
          
        }
        sort (a,a+n);
        sort(b,b+n);

        for(int i=0; i<n; i++){
            if (a[i]+b[n-i-1]>amax)
            amax = a[i]+b[n-i-1];

        }

        cout<<amax<<endl;

       






    }






    return 0;
}
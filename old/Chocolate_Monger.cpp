#include <bits/stdc++.h>
using namespace std;


long long int distinct_elements(long long int a[], long long int n){
   
  
   
   int count = 0;
   for (int i = 0; i < n; i++){
     
      while (i < n - 1 && a[i] == a[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n,x;
        cin >> n >> x;
        long long int a[n];
        for(long long int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long int k = distinct_elements(a,n);
        long long int rep= 0;
        for (long long int i=0; i<n ; i++){
            if(a[i]==a[i+1]){
                rep++;
            }
        }

        if(rep>x){
            cout << k <<endl;
        }
        else{
            long long int m = k + rep - x;
            cout << m << endl;
        }



    }
    return 0;
}
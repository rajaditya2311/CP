#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >>n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];

        }
        sort(a,a+n);
        long long int k = a[n-1];
        long long int l = a[n-2];
        long long int o = a[0];
        long long int p = a[1];
        long long int q = o*p + max(o-p, p-o);
        long long int m = k*l + max(l-k,k-l);
        cout <<max(m,q) <<endl;

    }

   
	return 0;
    
}
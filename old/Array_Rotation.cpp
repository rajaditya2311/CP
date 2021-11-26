#include<bits/stdc++.h>
using namespace std;
long long int k = pow(10,9) + 7;

int main(){
    long long int n;
    cin >> n;
    long long int a[n];
    long long int sum = 0;

    for(long long int i=0; i<n; i++){
        cin >> a[i];
        sum += (a[i]%k + k)%k;
    }
    long long int q=0;
    cin >> q;
    long long int z[q];
    
    for(long long int m=0; m<q; m++){
        cin >>z[q];
    }
    long long int l = sum;
    for(long long int j=1; j<=q; j++){
        
        l = (l*2)%k;
        cout << l <<endl;
    }
    return 0;
}
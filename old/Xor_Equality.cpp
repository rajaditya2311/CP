#include "bits/stdc++.h"
using namespace std;

long long int m = pow(10,9)+7;
long long int power(long long int x){

    if(x==0){
        return 1;
    }

    if(x%2==0){
        long long int k = power(x/2);
        return (k*k)%m;
    }
    else 
    {
        long long int k = power(x/2);
        k = (k*k)%m;
        k=(k*2)%m;
        return k;
    }

}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    int n;
    cin >> n;
    
    
    long long int count = power(n-1);
    cout << count<<endl;
}
return 0;
}
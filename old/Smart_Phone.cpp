#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    long long int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    long long int max = INT_MIN;

    for(int i=0; i<n; i++){
        if (a[i]*(n-i)>max)
            max = a[i]*(n-i);

    }
    cout << max;
    return 0;

}
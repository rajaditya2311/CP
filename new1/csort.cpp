#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[n];
    cin >> n;

    for(int i=0; i<n; i++){

        cin >> a[i];

    }
    int k=0;
    for(int i=0; i<n; i++){
        if(k<a[i])
            k=a[i];
    }

        int b[k+1]={0};
       for(int i=0; i<=n; i++){
           ++b[a[i]];
       }


    for(int i=0; i<=k; i++)
        cout << b[i]<<" ";

        return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        int max =INT_MIN;
        int k = n;
        for (int i=0; i<n; i++){
            cin >> a[i];
            if(i==0)
                max = a[i];
            else if(a[i]>max)
                k--;
            else
                max = a[i];
        }
        cout << k << endl;
    

    }
}

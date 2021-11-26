#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a[t];
    int i;
    
    for(i=0; i<t; i++){
        cin >> a[i];
        int z = 0;
        int k = 5;
        while(a[i]/k>0){
            z = z + a[i]/k;
            k = 5*k;

        }
        cout << z << endl;
    }
    

    
}
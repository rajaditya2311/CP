#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t=0;
    cin >> t;
    while(t--){
        long long int n=0;
        cin >> n;
        int k=0;
        k = n%4;
        
        int sum = (n/4)*44;
        if(n>=4){
            if (k==0)
                sum = sum +16;
            if( k==1)
                sum = sum +32;
            if(k==2)
                sum = sum + 44;
            if(k==3)
                sum = sum +55;            
        }
        else if(n==1)
            sum = 20;
        else if(n==2)
            sum = 36;
        else if(n==3)
            sum = 51;
        else if(n==4)
            sum = 60;
        cout << sum << endl;

    }
    return 0;
}
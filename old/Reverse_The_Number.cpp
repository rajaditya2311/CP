#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int rev =0;
        while(n>0){
            rev = rev*10 + n%10;
            n = n/10;
        }
        cout << rev << endl;
    }
}
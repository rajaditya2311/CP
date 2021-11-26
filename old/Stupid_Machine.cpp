#include <bits/stdc++.h>
using namespace std;
long long int findmin(long long int a[],int n){
    long long int flag =n;
    long long int mini =INT_MAX;
    for (long long int i=1; i<=n; i++){
            if(a[i]<mini){
                mini = a[i];
                flag = i;
                
            }
    }
    return flag;
    
}
int main(){
    int t=0;
    cin >> t;
    while (t--){
        long long int n=0,l=0,mini=INT_MAX;
        long long int token =0;
        cin >> n;
        long long int a[n+1];
        long long int maxx = 0;
        for (long long int i=1; i<n+1; i++){
            cin >> a[i];
            mini = min (a[i],mini);
            maxx += mini;
        }
        cout << maxx << endl;

      
    }
    return 0;
}
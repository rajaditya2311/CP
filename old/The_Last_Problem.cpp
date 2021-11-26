#include "bits/stdc++.h"
using namespace std;

long long int a[1001][1001];
void precalc(){
    a[1][1]=1;
    for(long long int i=2; i<=1000; i++){
        a[i][1] = a[i-1][1] + i;
    }

    for(long long int i=1; i<=1000; i++){
        for(long long int j=2; j<=1000; j++){
            a[i][j] = a[i][j-1] +i+j-2;
        }
    }

}

int main(){

    precalc();
    long long int t;
    cin >> t;
    while (t--){
        long long int x1,y1,x2,y2;
        cin >> x1>>y1>>x2>>y2;
        long long int sum=0;
        for(long long int i=x1; i<=x2; i++){
            sum += a[i][y1];
        }
        for(long long int j=y1+1; j<=y2; j++){
            sum+= a[x2][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}

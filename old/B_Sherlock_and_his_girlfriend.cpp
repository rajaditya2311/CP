#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime(10000001,true);
void sieveoferatosthenes(){
    isprime[0]=false;
    isprime[1]=false;
    for (int i = 2; i <= 10000000; i++) {
        if (isprime[i] && (long long)i * i <= 10000000) {
            for (int j = i * i; j <= 10000000; j += i)
                isprime[j] = false;
            }
    }
}



int main(){
    sieveoferatosthenes();
    int n;
    cin >> n;
    if(n==1 || n==2){
        cout << 1<<endl;
        if(n==1){
            cout << 1;
        }
        if(n==2){
            cout << 1<<" "<<1;
        }
    }
    else{
        cout << 2 << endl;

        for(int i=2; i<=n+1; i++){
            if(isprime[i]==true){
                cout << 2<<" ";
            }
            else{
                cout << 1 <<" ";
            }
        }
    }
    
}
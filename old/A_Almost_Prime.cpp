#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime(3001,true);
vector <int> cnt(3001,0);

void sieve(){
    isprime[0]=isprime[1]=false;
    for(int i=0; i<= 3000; i++){
        if(isprime[i]){
            for(int j=i; j<=3000; j=j+i){
                isprime[j]=false;
                cnt[j]++;
            }
        }
    }
}



int main(){
    sieve();
    int t;
    cin >> t;
    int sum=0;
    for(int i=1; i<=t; i++){
        if(cnt[i]==2){
            sum++;
        }
    }
    cout<<sum<<endl;


    
}
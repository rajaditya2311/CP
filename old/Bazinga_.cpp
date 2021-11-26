#include<bits/stdc++.h>
using namespace std;


vector<long long int> cnt(200001,0);
void sieve(){
    
    for(long long int i=2; i<= 200000; i++){
        
            for(long long int j=i; j<=200000; j=j+i){
                
                cnt[j]++;
            }
        
    }
}

vector <long long int> bazinga;
void countin(){
    for(int i=1; i<=200000; i++){
        if(cnt[i]==3){
            bazinga.push_back(i);
        }
    }
}


int main(){
    sieve();
    countin();
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << bazinga[n] <<endl;
    }

}
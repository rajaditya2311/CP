#include<bits/stdc++.h>
using namespace std;




vector <long long int> bazinga;
const int N = 20000;
long long int lp[N+1];
vector<long long int> pr;
void sieve(){


    for(long long int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (long long int j=0; j<(long long int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

void primes(){
    
    long long int k = pr.size();
    for(long long int i=0; i<k-1; i++){
        for(long long int j=i+1; j<k; j++){
            long long int m = pr[i]*pr[j];
            bazinga.push_back(m);
        }
    }
    sort(bazinga.begin(),bazinga.end());
    
}


int main(){
    sieve();
    primes();
    
    long long int t;
    
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << bazinga[n-1]<<endl;
    }
}
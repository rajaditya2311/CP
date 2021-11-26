#include <bits/stdc++.h>
using namespace std;

long long int soe(long long int n){
    bool prime[n] ={0};
    prime[0] = 1;
    prime[1] = 1;
    for (long long int t = 2; t*t <= n; t++){
        if(prime[t] == 1)
            continue;
        for (long long int m = 2; m*t <= n; m++){
            prime[m*t] = 1;
        }
        
    }
    long long int sum = 0;
    for (long long int i = 0; i <= n; i++){
        if (prime[i] == 0)
             sum = sum + i;
    }
    return sum;
}
int main() {
	// your code goes here
	long long int t=0;
	cin >>  t;
	while (t--){
	    long long int n;
	    cin >> n;
	    cout << soe(n) << endl;
	}
	
	return 0;
}
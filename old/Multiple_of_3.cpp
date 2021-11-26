#include <bits/stdc++.h>
using namespace std;

void isMulti(long long int K, long long int d0, long long int d1) {
    long long int mod1 = (d0 + d1) % 10;

    long long int sum_mod1 = d0 + d1 + mod1;
    
    long long int rep = (K-3)/4;
    long long int mod2[4];
    mod2[0] = (2*mod1) % 10;
    mod2[1] = (4*mod1) % 10;
    mod2[2] = (8*mod1) % 10;
    mod2[3] = (6*mod1) % 10;

    long long int sum_mod2 = 0;
    for(int i = 0; i < 4; i++) {
        sum_mod2 += mod2[i];
    }

    long long int z = (K - 3) % 4;
    long long int sum_mod3 = 0;
    for(int i = 0; i < z; i++) sum_mod3 += mod2[i]; 
    long long int is1 = sum_mod1 % 3;
    long long int is2 = ((rep%3)*(sum_mod2%3)) % 3;
    long long int is3 = sum_mod3 % 3;

    if((is1 + (is2 + is3)%3)% 3 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
int main() {
    int t;
    cin >> t;

    while(t--){
        long long int k;
        long long int d0, d1;
        cin >> k >> d0 >> d1;
        if(k == 2) {
            if((d0 + d1) % 3 == 0) 
                cout << "YES" << endl;
            else 
                cout <<"NO"<<endl;
        }
        else isMulti(k, d0, d1);


    }
}
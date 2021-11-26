#include <bits/stdc++.h>
using namespace std;
string factorialof(int n1){
    float sum = 0;
    if (n1 == 0){
        return "1";
    }
    
        for (int i = 1; i <= n1 ; i++)
            sum = sum + log(i);
        string res = to_string(round(exp(sum)));
        return res;    
    
}

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        string s = factorialof(n);
        int i =0;
        cout << s;
        cout << endl;
    }
	return 0;
}
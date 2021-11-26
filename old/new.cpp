#include <iostream>
using namespace std;

int main() {
    long long int t, k, d0, d1;
    cin >> t;
    while (t--){

        cin >> k >> d0 >> d1;
        int k1 = ((d0 + d1) % 10);
        long long int s1 = 0, s = 0, sum = 0, l = (k-3)/4;
        int m = (k - 3) + l*4;
        if (k == 2)
            {
                sum = d0 + d1;
            }
        else if (k == 3)
        {
            sum = d0 + d1 + ((d0+d1)%10); 
        }
        else {
        for (int i = 1; i<= m; i++){
            k1 = (2* (k1 % 10))%10;
            s += k1;
        }
        s1 = l * ((2*(d0 + d1))%10 + (4*(d0 + d1))%10 + (8*(d0 + d1))%10 + (16*(d0 + d1))%10);
        sum = d0 + d1 + ((d0 + d1)%10) + s1 + s;
        }
        if (sum % 3 == 0)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
	return 0;
}
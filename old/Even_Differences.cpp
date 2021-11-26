#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    long long int k;
	    cin >> k;
	    long long int d0, d1;
	    cin >> d0 >> d1;
	    long long int s = 0, s1 = 0; 
	    for (long long int i = 1; i < 10; i++) 
	        s += (i*((d0 + d1)%10))%10;
        for (long long int i = 0; i <= (k-2)%10 ; i++)
            s1 += (i*((d0 + d1)%10))%10;
        long long int sum = 0;
        long long int L = (k - 2)/10;
        sum =  d0 + d1 + (L*s) + s1;
        if (sum % 3 == 0)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
	}
	return 0;
}
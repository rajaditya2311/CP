
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while (t--){
	    long long int a[10];
	    for (int i = 0; i < 10; i++)
	        cin >> a[i];
	    long long int k;
        cin >> k;
        long long int sum = 0;
        for (int i = 9; i >= 0; i--)
            {
                sum += a[i];
                if (sum > k)
                {
                    cout << i+1 << endl;
                    break;
                }
                else if (sum == k)
                {
                    while (i--){
                        if (a[i-1] == 0){
                            continue;
                        }
                        else {
                            cout << i << endl;
                            break;
                        }
                }
                break;
            }
	}
	
}
    return 0;
}
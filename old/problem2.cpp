
#include <bits/stdc++.h>
using namespace std;
 


int main()
{
    long long int t;
    cin >> t;
    for(long long int i=1; i<=t; i++){
        long long int g;
        cin >> g;
        long long int count = 0;
        for (long long int i = 1; i*(i+1)/2 < g; i++)
        {
            long double l = (1.00 * g-(i*(i+1))/2)/(i+1);
            if (l-(int)l == 0.00)
                count++;       
        }
        count++;


        cout << "Case #" << i<<": "<< count<< endl;
        

    }
}
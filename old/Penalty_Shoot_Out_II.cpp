#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
       long long int n;
       cin >> n;
       string s;
       long long int s1,s2=0;
       cin >> s;
       int flag =0;
       for (long long int i=1; i< 2*n +1; i++){
           if (i%2!=0)
                s1 = s1 + (s[i-1]-'0');
            else
                s2 = s2 + (s[i-1]-'0');
            if(s1 > s2 + n - i/2){
                cout << i << endl;
                flag = 1;
                break;
                
            }
            if( s2 > s1 + n - (i+1)/2){
                cout << i << endl;
                flag = 1;
                break;

            }


                
                


        } 
        if(flag == 0){
            cout << 2*n << endl;
        }
        
    }
    return 0;
}
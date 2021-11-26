#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin >> t;

    while(t--){

        int n,k=0;
        cin >> n >> k;
        string s;
        cin >> s;
        int count =0;
        int max =0;


        for(int i=0; i<n; i++){
            if (s[i] == '*'){
                count ++;
                if(count >= max)
                    max =count;
            }
            else 
                count =0;

        }
        if(max >=k)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;






    }



    return 0;
}
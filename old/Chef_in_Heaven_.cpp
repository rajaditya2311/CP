#include <bits/stdc++.h>
using namespace std;

int goodtilli(string s, int i){
    int count=0;
    for (int j =0; j<i; j++){
        if(s[j]=='1'){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int l=0;
        string s;
        cin >> l >> s;
        int token =0,count =0;
        for (int i=1; i<=l; i++){
            if(s[i-1]=='1'){
                count++;
            }
            if(i%2==0){
                if(count >= i/2){
                    token =1;
                }
            }
            else{
                if(count > i/2)
                    token = 1;
            }
        }
        if(token == 1){
            cout <<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
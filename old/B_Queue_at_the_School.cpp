#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n>>t;
    string s;
    cin >> s;


    for(int i=0; i<t; i++){
        int j=0;
        while(s[j]!='\0'){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j+1]='B';
                s[j]='G';
                j++;
            }
            j++;
        }
    }
    cout<<s;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i=0;
    int cnt=0;

    while(s[i]!='\0'){
        if(s[i]==s[i+1]){
            cnt++;
        }
        i++;
    }
    cout<<cnt;
}
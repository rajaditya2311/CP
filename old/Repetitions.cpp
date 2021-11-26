#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long int n=s.length();
    int temp=1,ans=1;
    int i=0;
    while(s[i]!='\0'){
        if(s[i+1]==s[i]){
            temp++;
        }
        else{
            ans=max(temp,ans);
            temp=1;
        }
        i++;
    }
    ans=max(ans,temp);
    cout<<ans;
}
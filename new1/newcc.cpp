#include<bits/stdc++.h>
using namespace std;
void genall(string s,string ans){
    
    if(s.length()==0){
        cout << ans;
        return;
    }
    char ch=s[0];
    string ros = s.substr(1);

    genall(ros,ans);
    genall(ros,ans+ch);




}
int main(){
    string s="ABC";
    genall(s,"");
    return 0;
}
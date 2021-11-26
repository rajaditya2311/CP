#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin >> s;
    int k = s.length();

    for (int i=0; i<k; i++){
    if(s[i]==s[i+1]){
        s.erase(s.begin()+i);
        s.erase(s.begin()+i+1);
    }
        
    
    }
   if(s.empty()==1)
        cout <<"Empty String";
    else
        cout <<s;    





    return 0;
}
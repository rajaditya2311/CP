#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    cin >> s;
    ll i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
            s.erase(s.begin() + i);
            continue;
        }
            
        
        i++;
    }
    
    ll l = s.length();
    for(int k = 0; k < l; k++)
        if(isupper(s[k]) == 1)
            s[k] = s[k] + 32;
    char res[2*l];
    for(int k = 0; k < 2*l; k++){
        if(k % 2 == 0)
            res[k] = '.';
        else 
            res[k] = s[k/2];
    }
    for(int k = 0; k < 2*l; k++)
        cout << res[k];
     return 0;
}
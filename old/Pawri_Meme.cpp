#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if (s.length() < 5)
            cout << s <<endl;
        else 
        {
            char ch[5] = {'p','a','r' ,'t','y'};
            int i = 0;
            while(s[i] != '\0'){
            int j = i;
            for (j = i; j < i+5; j++)
                if (s[j] != ch[j-i])
                    break;
            if(j == i+5 && s[j-1] == 'y'){
                s[j-3] = 'w';
                s[j-2] = 'r';
                s[j-1] = 'i';
            }
            i++;    
            }
            
            cout << s << endl;
                    
                        
        }
    }
    
    
   
	
	return 0;
}
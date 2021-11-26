#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin >>t;
    while(t--){
        string s,s1,s2;
        cin >> s;
        int k = s.length();
        if(k%2==0){
             s1 = s.substr(0,k/2);
             s2 = s.substr(k/2,k/2);
           
        }
        else{
             s1 = s.substr(0, k/2);
             s2 = s.substr(k/2 + 1, k/2);
        }
        int i = 0, alphabet[26] = {0}, j;
        while (s1[i] != '\0') {
            if (s1[i] >= 'a' && s1[i] <= 'z') {
            j = s1[i] - 'a';
            ++alphabet[j];
            }
            ++i;
        }
        int z = 0, alphabet2[26] = {0}, l;
        while (s2[z] != '\0') {
            if (s2[z] >= 'a' && s2[z] <= 'z') {
            l = s2[z] - 'a';
            ++alphabet2[l];
            }
            ++z;
        }
          int flag=0;
          
          for (int m = 0; m<26; m++){
              if(alphabet[m] != alphabet2[m])
                flag = 1; 
            }
        if ( flag ==0){
            cout <<"YES"<<endl;

        }
        else
            cout <<"NO"<<endl;    
          





    }
 
  





    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = s.length();
    char str[l];
    int a[26]={0};
    int i=0;
    while(s[i]!='\0'){
        a[s[i]-'A']++;
        i++;
    }
    int odd=0;
    int idx=0;
    for(int i=0; i<26; i++){
        if(a[i]%2!=0){
            odd++;
            idx=i;
        }
    }
    for(int i=0; i<26; i++){
        
            a[i]=a[i]/2;
        
    }

    if(odd>1){
        cout<<"NO SOLUTION";
    }
    else if(odd ==1 && l%2==0){
        cout<<"NO SOLUTION";
    }
    else{
        
        int j=0;
        
        if(odd==1){
            str[l/2]=idx+'A';
        }
        
        
        for(int i=0; i<26; i++){
           
           
            while(a[i]>0){
                str[j]= i+'A';
                str[l-1-j]= i+'A';
                
               a[i]--;
                j++;
            }
        }

        for(int i=0; i<l; i++){
            cout<<str[i];
        }
    }
    
}
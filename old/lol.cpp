#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    for(int l=1;l<=n;l++){
        int k=0;
        int flag=0;
        cin>>k;
        for(int q=1;q<=k;q++){
             flag=0;
            string s;
            int temp1=0,temp2=0;
            cin>>s;
            for(int i=0;i<s.length();i++){
                if(   (s[i]<= 109) && (s[i]>=97) ) {
                    temp1++;
                }
                if((s[i]<=90) && (s[i]>=78)){
                    temp2++;
                }
                
            }
            if(temp1==s.length()){
                flag=1;
            }
            else if(temp2==s.length()){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
            
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        flag=0;
    }
	
	
	return 0;
}
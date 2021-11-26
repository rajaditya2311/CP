#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n=0,m=0,x=0,y=0;
        cin >> n >> m >> x >> y;
        char s[n][m];
        for(int i = 0 ;i<n;i++){
            int f=0,p=0;
             for(int j = 0 ;j<m;j++){
            cin>>s[i][j];
            }
            
            for(int j = 0 ;j<m;j++){
                if(s[i][j]=='F'){
                    f++;
                }
                else if(s[i][j]=='P'){
                    p++;
                }
            }
            if(f>=x){
                cout<<"1";
            }
            else if(f==x-1 && p>=y){
                cout<<"1";
            }
            else{
                cout<<"0";
            }    
        }

        cout <<endl;
    }
}
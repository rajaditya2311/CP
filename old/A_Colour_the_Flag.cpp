#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define POB pop_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n>>m;
        char flag1[n][m];
        char flag2[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i+j)%2==0){
                    flag1[i][j]='R';
                    flag2[i][j]='W';
                }
                else{
                    flag1[i][j]='W';
                    flag2[i][j]='R';
                }
            }
        }
           

        char c[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> c[i][j];
            }
        }
        int tflag1=0;
        int tflag2=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(c[i][j]==flag1[i][j] || c[i][j]=='.' ){
                    tflag1++;
                    
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(c[i][j]==flag2[i][j] || c[i][j]=='.'){
                    tflag2++;
                    
                }
            }
        }

        if(tflag1==(m*n)){
            cout<<"YES"<<endl;
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        cout<<flag1[i][j];
                    }
                    cout<<endl;
                }
        }
        else if(tflag2==(m*n)){
            cout<<"YES"<<endl;
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        cout<<flag2[i][j];
                    }
                    cout<<endl;
                }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

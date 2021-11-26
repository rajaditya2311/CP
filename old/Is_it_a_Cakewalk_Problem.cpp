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
        int a[10][10];
        int cnt=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin >> a[i][j];
                
            }
        }
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                
                if(a[i][j]<=30){
                    cnt++;
                }
            }
        }
        //cout << cnt <<endl;
        if(cnt>=60){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

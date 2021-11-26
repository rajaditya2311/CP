#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int laddoo=0;
        string a[n];
        for(int i = 0; i< n ; i++){
            cin >> a[i];

            if(a[i]=="CONTEST_WON"){
                int rank;
                cin >> rank;
                if(rank < 20)
                    laddoo += 20 - rank;
                laddoo = laddoo +300;    
            }
            if(a[i]=="TOP_CONTRIBUTOR"){
                laddoo+=300;
            }
            if(a[i]=="BUG_FOUND"){
                int severity;
                cin >> severity;
                laddoo +=severity;
            }
            if(a[i]=="CONTEST_HOSTED"){
                laddoo+=50;
            }

        }   

        if (s=="INDIAN"){
            cout << laddoo/200<<endl;
        }
        else
            cout << laddoo/400<<endl;
    }
}
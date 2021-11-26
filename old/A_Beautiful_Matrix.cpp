#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6][6];
    int x,y;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                x=i;
                y=j;
                cout<< abs(i-3)+abs(abs(j-3));
            }
        }
    }

}
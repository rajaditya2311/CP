#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    

    for (int i=0; i<n; i++){
        if(i%2==0){
            for(int j= 5*i +1; j<=5*i+5; j++)
                cout << j <<" ";
            cout << endl;    
        }
        else{
            for(int k = 5*(i+1); k>5*i ; k--)
                cout << k <<" ";
            cout << endl;    
        }
    }




    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,y,x;
        long long int lit = 1;
        cin >> a >> y >> x;
        if(a>=y){
            lit = (a*x) - (a-y)*x ;
        }
        else{
            lit = 1+(a*x);
        }
        cout << lit <<endl;
    }
}
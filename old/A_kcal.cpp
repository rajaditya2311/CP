#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(b==0){
        cout<<0;
    }
    else{
        float x;
        x = ((1.00)*((a*b)/100.0));
        cout<<x;
    }
}
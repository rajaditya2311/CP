#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b)
        cout << "yes";
    else if(b==c)
        cout <<"yes";
    else if(c==a)
        cout << "yes";
    else
        cout <<"no";

       return 0;     
}
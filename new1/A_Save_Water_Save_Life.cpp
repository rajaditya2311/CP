#include <bits/stdc++.h>
using namespace std;

int main(){

int t=0;
cin >> t;
while(t--){
    int h,x,y,c;
    cin >> h >> x >> y >> c;
    if(c >= (h*(x + floor(y/2))))
        cout << "YES"<<endl;
    else
        cout <<"NO"<<endl;    
}







    return 0;
}
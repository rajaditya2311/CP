#include<bits/stdc++.h>
using namespace std;

bool beautiful(int z){
    int d1=z%10;
    z=z/10;
    int d2=z%10;
    z=z/10;
    int d3=z%10;
    z=z/10;
    int d4=z%10;
    if(d1==d2 || d1==d3 || d1==d4 || d2==d3 || d2==d4 || d3==d4)
        return false;

    return true;    

}
int main(){
    int y;
    cin >> y;
    for(int i=y+1; i<=9123; i++){
        if(beautiful(i)){
            cout<<i;
            break;
        }
    }
}
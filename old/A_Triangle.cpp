#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool rightangled(int x1,int y1,int x2,int y2,int x3,int y3){
   int a1 = abs((y2-y1)*(y2-y1)) + abs((x2-x1)*(x2-x1));
   int b1 = abs((y3-y2)*(y3-y2)) + abs((x3-x2)*(x3-x2));
   int c1 = abs((y1-y3)*(y1-y3)) + abs((x1-x3)*(x1-x3));
   if(a1==0 ||b1==0 ||c1==0){
       return false;
   }
   if((a1+b1==c1) || (a1+c1==b1) || (b1+c1==a1))
        return true;

    return false;
}
bool almost(int x1,int y1,int x2,int y2,int x3,int y3){
    if(rightangled(x1+1,y1,x2,y2,x3,y3))
    return true;
    if(rightangled(x1,y1+1,x2,y2,x3,y3))
    return true;
    if(rightangled(x1,y1,x2+1,y2,x3,y3))
    return true;
    if(rightangled(x1,y1,x2,y2+1,x3,y3))
    return true;
    if(rightangled(x1,y1,x2,y2,x3+1,y3))
    return true;
    if(rightangled(x1,y1,x2,y2,x3,y3+1))
    return true;
    if(rightangled(x1-1,y1,x2,y2,x3,y3))
    return true;
    if(rightangled(x1,y1-1,x2,y2,x3,y3))
    return true;
    if(rightangled(x1,y1,x2-1,y2,x3,y3))
    return true;
    if(rightangled(x1,y1,x2,y2-1,x3,y3))
    return true;
    if(rightangled(x1,y1,x2,y2,x3-1,y3))
    return true;
    if(rightangled(x1,y1,x2,y2,x3,y3-1))
    return true;

    return false;
    
}


int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    if(rightangled(x1,y1,x2,y2,x3,y3)){
        cout<<"RIGHT";
    }
    else if(almost(x1,y1,x2,y2,x3,y3)){
        cout<<"ALMOST";
    }
    else{
        cout<<"NEITHER";
    }
    
}
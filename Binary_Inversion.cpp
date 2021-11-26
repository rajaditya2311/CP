#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)


class A{
    public:
        int data;
        virtual void fun(){

        }
        virtual void fun1(){
            
        }
        virtual void fun2(){
            
        }
};



int32_t main(){
 int i,n;
 int *p;
 i=2;
 p = new(nothrow) int[i];
 if(p==0){
     cout <<"Error";
 }
 else{
     loop(n,0,i){
         p[n]=5;
     }
     loop(n,0,i){
         cout << p[n];
     }
     delete[] p;
 }
}

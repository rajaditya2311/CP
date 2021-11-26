#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll a,b,c;
    cin>> a >> b>> c;


    if(c%2==0){
        if(llabs(a)==llabs(b)){
            cout<<"=";
        }
        else if(llabs(a)>llabs(b)){
            cout<<">";
        }
        else{
            cout<<"<";
        }
    }
    else{
        if(a==b){
            cout<<"=";
        }
        else if(a>b){
            cout<<">";
        }
        else{
            cout<<"<";
        }
    }
}
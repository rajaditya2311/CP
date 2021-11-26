#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int nt=sqrt(n);
    long long int mt=(-1+sqrt(1-4*(-m)))/2;
    if(nt<=mt){
        cout<<"Vladik"<<endl;
    }
    else{
        cout<<"Valera"<<endl;
    }
}
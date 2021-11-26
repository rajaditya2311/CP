#include<bits/stdc++.h>
using namespace std;

void toggle(int a[10][10],int i, int j){
    if(a[i][j]==1){
        a[i][j]=0;
    }
    else{
        a[i][j]=1;
    }
    if(a[i+1][j]==1){
        a[i+1][j]=0;
    }
    else{
        a[i+1][j]=1;
    }
    if(a[i-1][j]==1){
        a[i-1][j]=0;
    }
    else{
        a[i-1][j]=1;
    }
    if(a[i][j+1]==1){
        a[i][j+1]=0;
    }
    else{
        a[i][j+1]=1;
    }
    if(a[i][j-1]==1){
        a[i][j-1]=0;
    }
    else{
        a[i][j-1]=1;
    }
    
}

int main(){
    int a[10][10]={0};
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            a[i][j]=1;
        }
    }
    int k;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cin >> k;
            if(k%2!=0){
                toggle(a,i,j);
            }
        }
    }
    for(int i=1; i<=3; i++){
        for (int j=1; j<=3; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
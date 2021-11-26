#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1){
        cout<<1;
    }
    
    else if(n<=3){
        cout<<"NO SOLUTION";
    }
    else if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else{
        int b[n+3]={0};
        if(n%2==0){
            for(int i=1; i<=n/2; i++){
                b[i]=2*i-1;
                b[n/2+i]=2*i;
            }
        }
        else{
            for(int i=1; i<=(n+1)/2; i++){
                b[i]=2*i-1;
                b[(n+1)/2+i]= 2*i;

            }
        }
        
        for(int i=1; i<=n; i++){
            cout<<b[i]<<" ";
        }
    }
}
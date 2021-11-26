#include<bits/stdc++.h>
using namespace std;
int findarr(int arr[],int index,int k){
    
    if(index==-1){
        return -1;
    }
    

    if(arr[index]==k){
        return index;
    }
    else
        return findarr(arr,index-1,k);
}




int main(){
    
    int arr[]={10,50,50,200,30,40,50,70};
    int k;
    cin >> k;
    int maxm = findarr(arr,10,k);
    cout << maxm ;
}
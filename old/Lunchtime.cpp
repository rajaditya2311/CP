#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        {
    
    int n;
    cin>>n;

    int arr[n];
    int a[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(i==j){
                continue;
            }

            if(arr[i] == arr[j]){
                a[i]++;
                a[j]++;
                
            }

            if(arr[i] < arr[j]){
                break;
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;



}
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[] = {10,30,40,90,22,44,11};

    for (int i=0; i<6; i++){
        for(int j= i+1; j<7; j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;

            }
        }
    }
    for(int i=0; i<7; i++){
        cout <<"\t"<< a[i];
    }
}
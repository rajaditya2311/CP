#include<bits/stdc++.h>
using namespace std;

bool ifValid(int x, int y, int n, int**soln){

    for(int i=0; i<n; i++){
        if(soln[x][i]==1 and i!=y){
            return false;
        }
        if(soln[i][y]==1 and i!=x){
            return false;

        }
    }
    for(int i=x,j=y; i>=0 and j>=0; i--,j--){
        if(soln[i][j]==1 and i!=x and j!=y){
            return false;
        }
    }
    for(int i=x,j=y; i<=n-1 and j<=n-1; i++,j++){
        if(soln[i][j]==1 and i!=x and j!=y){
            return false;
        }
    }
    for(int i=x,j=y; i<=n-1 and j>=0; i++,j--){
        if(soln[i][j]==1 and i!=x and j!=y){
            return false;
        }
    }
    for(int i=x,j=y; i>=0 and j<=n-1; i--,j++){
        if(soln[i][j]==1 and i!=x and j!=y){
            return false;
        }
    }


    return true;

}



bool nqueens(int x, int y, int n, int** soln){
    if(x>n-1){
        return true;
    }
    for(int i=0; i<n; i++){
        if(ifValid(x,i,n,soln)){
            soln[x][i] = 1;

            if(nqueens(x+1,y,n,soln)){
                return true;
            }
            soln[x][i]=0;
        }
    }
    return false;
}






int main(){
    int n;
    cin >> n;

    // creating an empty solution array

    int** soln = new int*[n];
    for(int i=0; i<n; i++){
        soln[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soln[i][j]=0;
        }
    }

    nqueens(0,0,n,soln);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }


    


}
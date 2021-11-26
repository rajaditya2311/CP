#include <iostream>
#include <climits>

using namespace std;

int main(){
    int mx = INT_MIN;

    int a[5];
    for(int i = 0; i<5; i++)
        cin >> a[i];
    for(int i=0; i<5; i++){
        if(a[i]>mx)
        mx=a[i];

        cout << mx;
    }
    return 0;
}
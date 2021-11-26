#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,x;
        cin >> n >> x;
        pair <int,int> p[n];
        long long int maxx = INT_MIN;
        for(int i =0; i<n; i++){
            cin >> p[i].first;
            cin >> p[i].second;
            if(p[i].first <= x){
                if(p[i].second > maxx)
                    maxx = p[i].second;
            }
        }
        cout << maxx << endl;

    }
    return 0;
}


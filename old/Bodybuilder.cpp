#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,r;
        cin >> n >> r;
        pair <long long int , long long int> p[n];
        for (long long int i=0; i<n; i++){
            cin >> p[i].first;
        }
        for (long long int i=0; i<n; i++){
            cin >> p[i].second;
        }
        long long int tension =0;
        long long int maxx = INT_MIN;
        long long int z=0;
        for(long long int i=0; i<n; i++){
            tension += p[i].second;
            maxx = max(maxx,tension);
            long long int k = (p[i+1].first - p[i].first)*r ;
            
            tension = max (z,tension -k);


        }
        cout << maxx << endl;
    }
    return 0;
}
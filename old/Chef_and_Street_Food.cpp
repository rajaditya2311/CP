#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int s[n+1],p[n+1],v[n+1], prof[n+1];
        int maxx = INT_MIN;
        for (int i=1; i<=n; i++){
            cin >> s[i] >> p[i] >> v[i];
            s[i] = s[i]+1;
            p[i]= p[i]/s[i];
            prof[i] = p[i]*v[i];
            maxx = max(prof[i],maxx);
        }
        cout << maxx << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    int n,m;
    cin >> n >> m;
    int sum =0;
    vector<int> vect(n+1,1);
    for(int i=2; i<=n; i++){
        
        sum += vect[m%i];
        for(int j=m%i; j<=n; j=j+i)
            vect[j]++;

    }

    cout<< sum <<endl;
    
    
}
return 0;
}

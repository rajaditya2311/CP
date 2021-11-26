#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int x,r,m;
        cin >> x >> r >> m;
        r*=60;
        m*=60;
        long long int time = min(x, r);
		if (x < r) {
			time += (r - x) * 2;
		}

		if (time <= m) {
			cout<< "YES\n";
		}
		else {
			cout << "NO\n";
		}

    }
}
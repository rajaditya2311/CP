#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    int m,n;
    cin >> m;
    int n =1;
    int rangeBitwiseAnd(int m, int n) {
    int x = 0;
    while ((m|x) < n)
       x = (x<<1) | 1;

    return m & ~x;
}
}
return 0;
}

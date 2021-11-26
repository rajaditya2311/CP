#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    set<int> s;
    for(int i=0; i<n; i++){
        cin>>k;
        s.insert(k);

    }
    cout<<s.size();
}
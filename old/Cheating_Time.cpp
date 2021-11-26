#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


ll firstZero(vector<ll> arr, ll low, ll high) 
{
	if (high >= low) 
    { 
       
        int mid = low + (high - low)/2; 
        if (( mid == 0 || arr[mid-1] == 1) && arr[mid] == 0) 
            return mid; 
        if (arr[mid] == 1)  // If mid element is not 0 
            return firstZero(arr, (mid + 1), high); 
        else  
            return firstZero(arr, low, (mid -1)); 
    } 
    return -1; 
}   
 
ll countZeroes(vector <ll> arr, ll n) 
{ 
     
    ll first = firstZero(arr, 0, n-1); 
   
    if (first == -1) 
        return 0; 
    return (n - first); 
} 












int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n,k,f;
        cin>> n>> k>> f;
        ll s[n],e[n];
        vector<ll> arr(f,0);
        for(int i=0; i<n; i++){
            cin >>s[i]>>e[i];
            fill(begin(arr)+s[i], begin(arr)+e[i], 1);

        }
        for(auto it:arr){
            cout<<it<<" ";
        }
        ll c= countZeroes(arr,f);
        cout<<endl;
        cout<<c<<endl;
        if(c>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}

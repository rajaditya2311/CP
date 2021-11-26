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

int n;
cin >> n;
int a[n];
for(int l=0; l<n; l++){
    cin >> a[l];
}
int i,j, min_idx,temp; 
for (i = 0; i < n-1; i++) { 
        
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (a[j] < a[min_idx]) 
            min_idx = j; 
  
            temp = a[min_idx]; 
            a[min_idx] = a[i]; 
            a[i] = temp;
            
            for (int k=0; k < n; k++) 
                cout << a[k] << " "; 
            cout << endl;
            if(is_sorted(a,a+n)){
                break;
            }
        
} 
     


return 0;
}

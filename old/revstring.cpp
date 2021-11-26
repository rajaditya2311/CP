#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=0;
    cin>>t;
	int n=0;
	int a[t];
	for(int i=0;i<t;i++){
	    
	
	cin>>a[i];
	}
	cin>>n;
	int mid=0, first=0,last=t;
	while(last>=first){
	mid=(first+last-1)/2;
	if(a[mid]==n){
	    cout<<mid;
	}
	else if(a[mid]<n){
	    first=mid+1;
	    
	}
	else if(a[mid]>n){
	    last = mid-1;
	}
	}	
	return 0;
}
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll T;
	cin >> T;
	while (T--) {
		ll a,b;
		cin >> a >> b;
		vector<ll> num1,num2;
		while(a>0){
			ll k=a%10;
			num1.push_back(k);
			a=a/10;
		}
		while(b>0){
			num2.push_back(b%10);
			b=b/10;
		}
		reverse(num1.begin(),num1.end());
		reverse(num2.begin(),num2.end());
		
		vector<ll> ans;
		ll i=num1.size()-1;
		ll j=num2.size()-1;
		ll carry=0;
		while(i>=0 || j>=0){
			ll sum = carry;

			if(i>=0){
				sum+=num1[i];
			}
			if(j>=0){
				sum+=num2[j];
			}
			ll rem = sum%10;
			carry = sum/10;
			ans.push_back(rem);
			i--;
			j--;

		}
		if(carry!=0){
			ans.push_back(carry);
		}
		reverse(ans.begin(),ans.end());
		for(auto it:ans){
			cout<<it;
		}
		cout<<endl;

	}
	return 0;
}

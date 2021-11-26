//c++ program to print all the combinations of balanced parenthesis

#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)



typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const long long int N = 1e6+2;
const long long int MOD = 1e9+7;
//vi dp(N,0);





vector<string> generateParenthesis(int n,int cons) {
		vector<string>two;
		vector<string>ans;
        
		if(n==1){two.push_back("()");return two;} 
		if(n==2){
		two.push_back("(())");
		two.push_back("()()");
		return two;
		}
		

		two=generateParenthesis(n-1,cons); 

        if(ans.size()>=cons) return ans;
		
		for(int i=0;i<two.size();i++){

			string buf="(",bug="(",bus="(";
			buf = buf+two[i]+")";
			bug = bug+")"+two[i];
			bus=two[i]+bus+")";
			ans.push_back(buf);
			ans.push_back(bus);
			ans.push_back(bug);
			
		}
		
		
		ans.pop_back();
		
		
		return ans;
	}




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
    vector<string>ff; 
	int n;
    cin >> n;
    int cons = n;
	ff=generateParenthesis(n,cons); 

	for (int i = 0; i < n; ++i)
	{
		cout<<ff[i]<<endl; 
		
	}
    }
    return 0;
}



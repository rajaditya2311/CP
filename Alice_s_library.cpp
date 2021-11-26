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

// uevoli
// /u/love\
// evol



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stack<char> a;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        stack <char> temp;
        if(s[i] == 94){
            
            while(a.top()!='/'){
                
                temp.push(a.top());
                a.pop(); 
            }
            a.pop();
            while(!temp.empty()){
                a.push(temp.top());
                temp.pop();
            }
            

        }else{
             a.push(s[i]);
        }
        
       
        
        

    }
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }

   
}

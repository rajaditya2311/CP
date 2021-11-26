#include "bits/stdc++.h"
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define POB pop_back
#define mp make_pair
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    int test=1;
    while (t--){
        ll n;
        cin >> n;

        char arr[n][n];
        ll row_0[n]={0};
        ll col_0[n]={0};
        ll row_1[n]={0};
        ll col_1[n]={0};
        loop(i,0,n){
            loop(j,0,n){
                cin >> arr[i][j];
                if(arr[i][j]=='X'){
                    row_1[i]++;
                    col_1[j]++;
                }
                if(arr[i][j]=='O'){
                    row_0[i]++;
                    col_0[j]++;
                }
            }
        }
        vector<ll> ans_row(n,INT_MAX);
        vector<ll> ans_col(n,INT_MAX);
        bool flag = false;
        loop(i,0,n){
            if(col_0[i]==0){
                flag = true;
                ans_col[i] = n - col_1[i];
            }
            if(row_0[i]==0){
                flag = true;
                ans_row[i] = n- row_1[i];
            }

        }

        ll min_row  = *min_element(ans_row.begin(),ans_row.end());
        ll min_col = *min_element(ans_col.begin(),ans_col.end());

        ll min_ans = min(min_row,min_col);

        ll ans = 0;

        loop(i,0,n){
            if(ans_row[i]==min_ans){
                ans++;
            }
            if(ans_col[i]==min_ans){
                ans++;
            }
        }
        ll extra=0;
        loop(i,0,n){
            loop(j,0,n){
                if(row_1[i] == n-1 and row_0[i]==0 and col_1[j]==n-1 and col_0[j]==0){
                    if(arr[i][j]=='.'){
                        extra++;
                    }   
                }
            }
        }
        if(flag){
            cout<<"Case #"<<test++<<": "<< min_ans<<" "<<ans-extra<<endl;
        }   
        else{
            cout<<"Case #"<<test++<<": Impossible"<<endl;
        }
        
        






    }
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
typedef int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


bool allCharactersSame(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;

    int i=1;

    while (t--){
        string s;
        cin >> s;

        if(allCharactersSame(s)){
            cout << "Case #"<<i++<<": "<<0<<endl;
        }
        else{
            vector<ll> freq(26,0);

            int j=0; 
            while(s[j]!='\0'){
                freq[s[j++]-'A']++;
            }

            int k = max_element(freq.begin(),freq.end())- freq.begin();

            if(freq[0]==0 and freq[4]==0 and freq[8]==0 and freq[14]==0 and freq[20]==0){
                 cout << "Case #"<<i++<<": "<<s.length()<<endl;
            }
            else{
                int vow_tot = freq[0]+freq[4]+freq[8]+freq[14]+freq[20];
                int cons_tot = s.length() - vow_tot;
                int vowels[5] = {freq[0],freq[4],freq[8],freq[14],freq[20]};
                int max_count=-1;
                

                for(int i=0; i<5; i++){
                    if(vowels[i]>max_count){
                        max_count= vowels[i];
                    }

                }

                ll ans1 = s.length() - vow_tot + (vow_tot-max_count)*2 ; 
                ll ans2 = INT_MAX;

                    freq[0]=0;
                    freq[4]=0;
                    freq[8]=0;
                    freq[14]=0;
                    freq[20]=0;

                    ll max_const = *max_element(freq.begin(),freq.end());

                    ans2 = (cons_tot-max_const)*2 +vow_tot;
                

                cout << "Case #"<<i++<<": "<<min(ans1,ans2)<<endl;



            }







        }


    }
    return 0;
}

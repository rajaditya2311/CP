#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> one = {1,2,9,6};
    vector<int> two = {3,3,3};
    vector<int> common;
    int i= one.size()-1;
    int j = two.size()-1;
    int carry =0;
    while(i>=0 && j>=0){

        int sum = one[i]+two[i] + carry;
        
        common.push_back(sum%10);

        carry = (sum>=10);
        i--;
        j--;
    }
    

    
    reverse(common.begin(),common.end());
    for(auto it:common){
        cout<<it;
    }
}
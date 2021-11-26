#include<iostream>
using namespace std;

void rev(string s){

    if(s.empty()==true)
        return;
    rev(s.substr(1));

    cout <<s[0];

}
int main(){
    string s="amanaplanacanalpanama";
    rev(s);
    return 0;
}
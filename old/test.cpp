#include <iostream>
using namespace std;
int  fact(int a)
{   
    int f = a;
    if (a!=0){
    for(int i=1; i<a; i++)
        f = f * i;
    return f;
    }
    else 
        return 1;
}
int main() {
    int n=5;
   
    for (int i=0 ; i <n; i++)
    {
        for (int j=0; i <=i ;j++)
             cout << fact(i)/(fact(i-j)*fact(j))<<" ";
         cout << endl;
    }
	return 0;
}
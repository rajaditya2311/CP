#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


void multiplication_in_array(int *array, ll a)
{
    ll carry = 0;
    ll cur;
    for (int i = 199; i >= 0; i--)
    {
        cur = array[i] * a + carry;
        array[i] = cur % 10;
        carry = cur / 10;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
    int array[200];

        ll fact = 1;
        if (a<19)
        {

            for (int i = 1; i <= a; i++)
            {
                fact *= i;
            }
            cout << fact << endl;
        }

        else
        {
            for (int i = 0; i < 200; i++)
            {
                array[i]=0;
            }
            array[199]=1;

            for( int i = 1 ; i<=a ; i++)
            {
                multiplication_in_array(array , i );
            }
            int check = 0;
    for (int i = 0; i < 200; i++)
    {
        if(array[i]!=0)
        check=1;
        if(check==1)
        cout<<array[i];
    }
    cout<<endl;
        }
    }

  

    return 0;
}
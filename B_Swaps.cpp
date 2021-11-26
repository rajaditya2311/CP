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
#define int long long


int merge(vi arr, int temp[], int left, int mid, int right)
{
    int inv_count = 0;
 
    int i = left; /* i is index for left subarray*/
    int j = mid;  /* j is index for right subarray*/
    int k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
 
            /* this is tricky -- see above explanation/
              diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }
 
    /* Copy the remaining elements of left subarray
     (if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    /* Copy the remaining elements of right subarray
     (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
 
    /*Copy back the merged elements to original array*/
    for (i=left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}
 
/* An auxiliary recursive function that sorts the input
   array and returns the number of inversions in the
   array. */
int _mergeSort(vi arr, int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left)
    {
        /* Divide the array into two parts and call
          _mergeSortAndCountInv() for each of the parts */
        mid = (right + left)/2;
 
        /* Inversion count will be sum of inversions in
           left-part, right-part and number of inversions
           in merging */
        inv_count  = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid+1, right);
 
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid+1, right);
    }
 
    return inv_count;
}
 
/* This function sorts the input array and returns the
   number of inversions in the array */
int countSwaps(vi arr, int n)
{
    int temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        vi a(n),b(n);
        loop(i,0,n) cin >> a[i];
        loop(i,0,n) cin >> b[i];
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        cout<< countSwaps(a,n)<<" "<<countSwaps(b,n)<<endl;
    }
    return 0;
}

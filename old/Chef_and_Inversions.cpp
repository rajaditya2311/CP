#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


ll _mergeSort(int arr[], int temp[], int left, int right);
ll merge(int arr[], int temp[], int left, int mid,
		int right);

int mergeSort(int arr[], int array_size)
{
	int temp[array_size];
	return _mergeSort(arr, temp, 0, array_size - 1);
}

ll _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid;
    ll inv_count = 0;
	if (right > left) {
		
		mid = (right + left) / 2;

	
		inv_count += _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid + 1, right);

		
		inv_count += merge(arr, temp, left, mid + 1, right);
	}
	return inv_count;
}


ll merge(int arr[], int temp[], int left, int mid,
		int right)
{
	int i, j, k;
	ll inv_count = 0;

	i = left; 
	j = mid; 
	k = left; 
	while ((i <= mid - 1) && (j <= right)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];

		
		
			inv_count = inv_count + (mid - i);
		}
	}

	
	while (i <= mid - 1)
		temp[k++] = arr[i++];

	
	while (j <= right)
		temp[k++] = arr[j++];

	
	for (i = left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;
}







int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin >> T;
while (T--) {
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll k = mergeSort(arr,n);
    cout << k << endl;
}
return 0;
}

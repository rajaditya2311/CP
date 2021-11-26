

#include <bits/stdc++.h>
using namespace std;
int T, N, M;
int main(){
    
   
    cin >> T;
    for (int i=0; i < T; i++)
    {   int count = 0;    
        cin >> N >> M;
         int A[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }
        sort(A,A+N);

        for (int i=0; i<N; i++)
        {
           while (i < N-1 && A[i] == A[i+1])
            i++;
  
      count++;
        }
        if (M > count)
            cout << " Yes"<<endl;
        else 
            cout << "No"<<endl;
    }          
 return 0;
 
}
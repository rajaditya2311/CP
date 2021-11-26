#include <iostream>
using namespace std;

int main() {
	int t,W,wr,n;
	cin >> t;
	while (t--){
	    cin >> n >> W >> wr;
	    int w[n]={0};
	    long long int sum = 0;
	    for (int i = 0; i <n; i++){
	        cin >> w[i];
            sum = sum + w[i];
	    }
	    if ( W <= wr + sum)
	    {  
	        
	        if (n % 2 == 0){
	            int forward[n/2] = {0};
	            int reverse[n/2] = {0};
	        for(int i = 0; i < n/2; i++){
	            forward[i] = w[i];
	            reverse[n/2 - i -1] = w[n/2 +i];
	        }
	        int i = 0;
	        for( i = 0; i < n/2; i++)
	        {
	           if (forward[i] !=  reverse[i]){
	               cout << "NO"<<endl;
	               break;
	           }
	        }
	        if (i == n/2)
	            cout << "yes"<<endl;
	            
	        }
	        else {
	            int forward[(n-1)/2] = {0};
	            int reverse[(n-1)/2] = {0};
	        for(int i = 0; i < (n-1)/2; i++){
	            forward[i] = w[i];
	            reverse[(n-1)/2 - i -1] = w[(n+1)/2 +i];
	        }
	        int i = 0;
	        for( i = 0; i < (n-1)/2; i++)
	        {
	           if (forward[i] !=  reverse[i]){
	               cout << "NO"<<endl;
	               break;
	           }
	        }
	        if (i == (n-1)/2)
	            cout << "yes"<<endl;
	        }
	        
	        
	    }
	    else 
	        cout << "NO"<<endl; 
	    
	}
	return 0;
}
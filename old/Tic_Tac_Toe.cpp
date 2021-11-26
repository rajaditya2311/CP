#include <bits/stdc++.h>
using namespace std;
int winning(string s1,string s2,string s3, char a ){
     
    if( (s1[0]==a)   &&   (s1[1]==a ) &&  (s1[2]==a )  )
     return 1;
    if( (s2[0]==a)   &&   (s2[1]==a ) &&  (s2[2]==a )  )
     return 1;
    if( (s3[0]==a)   &&   (s3[1]==a ) &&  (s3[2]==a )  )
     return 1;
    if ( (s1[0]==a)  &&   (s2[0]==a) && (s3[0]==a) ) 
     return 1;
     if ( (s1[1]==a)  &&   (s2[1]==a) && (s3[1]==a) ) 
     return 1;
     if ( (s1[2]==a)  &&   (s2[2]==a) && (s3[2]==a) ) 
     return 1;
    if ( (s1[0]==a)  &&   (s2[1]==a) && (s3[2]==a) )
     return 1; 
     if ( (s1[2]==a)  &&   (s2[1]==a) && (s3[0]==a) ) 
     return 1;
     
     return 0;
}


  int main(){
   int t=0;
   cin>>t;
   for(int i=1;i<=t;i++){
       string s1,s2,s3;
       cin>>s1>>s2>>s3;
       int countx=0,counto=0;
       
       
       for(int i=0;i<3;i++){
	        if(s1[i]=='X'){
	            countx++;
	        }
	        else if(s1[i]=='O'){
	            counto++;
	        }
	    }
	    for(int i=0;i<3;i++){
	        if(s2[i]=='X'){
	            countx++;
	        }
	        else if(s2[i]=='O'){
	            counto++;
	        }
	    }
	    for(int i=0;i<3;i++){
	        if(s3[i]=='X'){
	            countx++;
	        }
	        else if(s3[i]=='O'){
	            counto++;
	        } 
	    }
	    if(countx>counto+1){
	        cout<<3<<endl;
	    }
	    else if(counto>countx){
	        cout<<3<<endl;
	    }
	    else{
	        if(winning(s1,s2,s3,'X')+ winning(s1,s2,s3,'O')==2 ){
	            cout<<3<<endl;
	        }
	        else if(winning(s1,s2,s3,'X')+winning(s1,s2,s3,'O')==1){
            if(winning(s1,s2,s3,'X')==1){
                if(countx>counto){
                    cout << 1 <<endl;
                }
                else{
                    cout<< 3<<endl;
                }
            }
            if(winning(s1,s2,s3,'O')==1){
                if(countx==counto){
                    cout << 1 << endl;
                }
                else{
                    cout<<3<<endl;
                }
            }
	        }
	        else{
	            if(countx+counto==9){
	                cout<<1<<endl;
	            }
	            else{
	                cout<<2<<endl;
	            }
	        }
	    }
       
   }
   return 0;
  }
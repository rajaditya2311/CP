#include<stdio.h>

int main(){
    char str[100];
    fflush(stdin);                                          
    gets(str);                                              // input from user
    int i=0;
    int counter[100]={0};                                       
    while(str[i]!='\0'){                                    //iterating over string
        
        
               
            int j=i+1;
            
            while(str[j]!='\0'){
                
                
                if(counter[j]==0){                                  // checking if char already replaced
                    char temp = str[i];
                    if(str[i]==str[j]){                             //checking for multiple occurence
                        
                        if(str[j]=='z'){                            // if repeated character is z, then replacing with a
                            str[j]='a';
                        }
                        else{
                            str[j]=temp+1;                          // incrementing ASCII value of character
                        }
                        counter[j]=1;                               // marking the value which is being replaced
                                                                    //so no further replacement takes place
                        
                    }
                }
                
                j++;
                
            }
            
        
        i++;
        
    }
    printf("\n");
    puts(str);                                                          // output from user

}
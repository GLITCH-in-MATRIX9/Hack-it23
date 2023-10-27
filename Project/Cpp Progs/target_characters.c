#include <stdio.h>
#include <string.h>
//checking if a string is following certain target of characters

int main(){
	int x=0;
    int y=0;
	//x is number of z, y is number of 0
	char string_1[20];
	scanf("%s",string_1); 
     
    //printf("size of string is %d",strlen(string_1));    
    for(int i=0;i<strlen(string_1);i++){
        if(string_1[i]=='z'){
            //printf("found a z");
            x++;
        }else if(string_1[i]=='o'){
            //printf("found an o");
            y++;
        }
    }
    if(2*x==y) {
        printf("Yes");
    }else{
        printf("No");
    }                   
}      

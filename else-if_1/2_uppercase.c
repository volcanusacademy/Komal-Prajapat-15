// 2) Program to check whether entered character is in uppercase or not 
#include<stdio.h>
void main(){
    int ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>='A' || ch<='Z'){
        printf("character is in uppercase");
        }
        else{
            printf("no");

        }
            
}
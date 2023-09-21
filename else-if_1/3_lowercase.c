// 3) Program to check whether entered character is in lowercase or not 
#include<stdio.h>
void main(){
    int ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>='a' || ch<='z')
        printf("character is in lowercase");
        else{
            printf("not");

        }
            
}
// 3) Program to check whether entered character is in lowercase or not 
#include<stdio.h>
void main(){
    char ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>=97 && ch<=122 )
        printf("character is in lowercase");
        else{
            printf("not");

        }
            
}
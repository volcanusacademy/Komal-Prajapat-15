// 4) Program to check whether entered character is an alphabet or not
#include<stdio.h>
void main(){
    char ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if((ch>='a' && ch<='z')||( ch>='A' && ch<='Z'))
        printf("character is alphabet");
        else{
            printf("character is not a alphabet");

        }
            
}
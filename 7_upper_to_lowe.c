// 7) Program to check whether entered character is in uppercase or not and if yes, then convert it into lowercase
#include<stdio.h>

void main(){
    char ch,lower;

        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>='A' && ch<='Z'){
            lower=ch+32;
        printf("character is in Lowercase %c ",lower);
        }
        
        else{
        printf("character is not in uppercase");

        }
            
}
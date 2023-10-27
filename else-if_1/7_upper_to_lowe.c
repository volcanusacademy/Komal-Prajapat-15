// 7) Program to check whether entered character is in uppercase or not and if yes, then convert it into lowercase

// standard input-output header file
#include<stdio.h>
void main(){    //main function
     // variabl declaration 
        char ch,lower;

        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>='A' && ch<='Z'){
            // uppercase character to lowercase character
            lower=ch+32;
            //print lower case character
        printf("character is in Lowercase %c ",lower);
        }
        
        else{
        printf("character is not in uppercase");

        }
            
}
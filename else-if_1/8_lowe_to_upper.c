// 8) Program to check whether entered character is in lowercase or not and if yes, then convert it into uppercase

// standard input-output header file
#include<stdio.h>
void main(){    //main function
     // variabl declaration 
    char ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        //check condition        
        if(ch>=97 && ch<=122 ){
            // lower case to uppercase
            ch = ch-32;
            //print char in uppercasr
        printf("character is in uppercase %c" ,ch);
        }
        else{
            printf("character is not in lowercase");

        }
            
}
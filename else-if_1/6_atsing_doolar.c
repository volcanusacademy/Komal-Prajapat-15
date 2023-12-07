// 6) Program to check whether entered character is a $ or @ by its ascii value

// standard input-output header file
#include<stdio.h>
void main(){    //main function
    char ch;    // variabl declaration 
    
    printf("enter any character :- ");
    scanf("%c",&ch);
    //condition check
   if(ch==64){
    
    printf("Character is @");
   }
   else if( ch==36){
    printf("Character is $");
   }
   else{
    printf("no");
   }
}
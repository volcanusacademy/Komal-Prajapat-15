// 6) Program to check whether entered character is a $ or @ by its ascii value

#include<stdio.h>
void main(){
    char ch;
    printf("enter any character :- ");
    scanf("%c",&ch);
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
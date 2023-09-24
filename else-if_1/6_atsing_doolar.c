// 6) Program to check whether entered character is a $ or @ by its ascii value

#include<stdio.h>
void main(){
    char ch;
    printf("enter any character :- ");
    scanf("%c",&ch);
    if(ch=='36' || ch=='46'){
        printf("character is a digit");
    }
    else{
        printf("character is not  a digit");
    }
}
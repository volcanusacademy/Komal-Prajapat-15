// 5) Program to check whether entered character is a digit or not
#include<stdio.h>
void main(){
    char ch;
    printf("enter any character :- ");
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9'){
        printf("character is a digit");
    }
    else{
        printf("character is not  a digit");
    }
}
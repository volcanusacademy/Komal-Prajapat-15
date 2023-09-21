// 5) Program to check whether entered character is a digit or not
#include<stdio.h>
void main(){
    char ch;
    printf("enter any number :- ");
    scanf("%d",&n);
    if(n<=0 && n>=9){
        printf("number is a digit");
    }
    else{
        printf("not");
    }
}